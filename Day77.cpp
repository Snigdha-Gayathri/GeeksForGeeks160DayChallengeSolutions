class Solution {
  public:
    vector<vector<int>>res;
        
        bool isSafe(vector<int>&board, int col, int row)
        {
            for(int i=0;i<col;++i)
            {
                if(board[i]==row || abs(board[i]-row)== abs(i-col))
                {
                    return false;
                }
            }
            return true;
        }
        
        void solve(int n,int col, vector<int>&board)
        {
            if(col==n)
            {
                vector<int> solution;
                for(int i=0;i<n;++i)
                {
                    solution.push_back(board[i]+1);
                }
                res.push_back(solution);
                return;
            }
            for(int row=0;row<n;++row)
            {
                if(isSafe(board,col,row))
                {
                    board[col]=row;
                    solve(n,col+1,board);
                }
            }
        }
    vector<vector<int>> nQueen(int n) {
        res.clear();
        vector<int> board(n,0);
        solve(n,0,board);
        return res;
        
        
        
        
    }
};