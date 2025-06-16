// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if(b==0) return 0;
        long long exponent=e;
        bool negative=false;
        if(exponent<0)
        
        {
            negative=true;
            exponent=-exponent;
        }
        double result=1.0;
        while(exponent>0)
        {
            if(exponent%2==1)
            {
                result*=b;
            }
            b*=b;
            exponent/=2;
        }
        return negative?1.0/result:result;
        
    }
};