class Solution {
    public:
      // Function to search a given number in row-column sorted matrix.
      bool searchRowMatrix(vector<vector<int>> &mat, int x) {
          // code here
          int n=mat.size();
          int m=mat[0].size();
          for(int i=0;i<n;i++)
          {
              int left=0, right=m-1;
              while(left<=right)
              {
                  int mid=left+(right-left)/2;
                  if(mat[i][mid]==x) return true;
                  else if(mat[i][mid]<x) left=mid+1;
                  else right=mid-1;
              }
          }
          return false;
      }
  };