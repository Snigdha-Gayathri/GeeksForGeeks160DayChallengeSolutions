class Solution {
  public:
    // Function to find a solved Sudoku.
    bool isSafe(int row, int col, int num, vector<vector<int>>&mat)
    {
        for(int x=0;x<9;x++)
        {
            if(mat[row][x]==num || mat[x][col]==num)
            {
                return false;
            }
        }
            int startRow=row-row%3;
            int startCol=col-col%3;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(mat[i+startRow][j+startCol]==num)
                    {
                        return false;
                    }
                }
            }
            return true;
        
    }
    
    bool solve(vector<vector<int>>&mat)
    {
        for(int row=0;row<9;row++)
        {
            for(int col=0;col<9;col++)
            {
                if(mat[row][col]==0)
                {
                    for(int num=1;num<=9;num++)
                    {
                        if(isSafe(row,col, num, mat))
                        {
                            mat[row][col]=num;
                        
                           if(solve(mat)) return true;
                           mat[row][col]=0;
                        }
                        
                            
                        
                        
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
        
    }
};