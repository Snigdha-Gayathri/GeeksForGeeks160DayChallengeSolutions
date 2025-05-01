class Solution {
    public:
      bool isPossible(vector<int> &arr, int k, int maxPages)
      {
          int students=1;
          int currentSum=0;
          for(int pages: arr)
          {
              if(pages>maxPages) return false;
              if(currentSum+pages>maxPages)
              {
                  students++;
                  currentSum=pages;
                  if(students>k) return false;
              }
              else
              {
                  currentSum+=pages;
              }
          }
          return true;
      }
      
      int findPages(vector<int> &arr, int k) {
          // code here
          int n=arr.size();
          if(n<k) return -1;
          
          int low=*max_element(arr.begin(),arr.end());
          int high=accumulate(arr.begin(),arr.end(),0);
          int result=-1;
          while(low<=high)
          {
              int mid=low+(high-low)/2;
              if(isPossible(arr,k,mid))
              {
                  result=mid;
                  high=mid-1;
                  
              }
              else
              {
                  low=mid+1;
              }
              
          }
          return result;
          
      }
  };