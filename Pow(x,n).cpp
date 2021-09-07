class Solution {
public:
    double pw(double x, long long int n)
    {
        if (n<0)
        {
            x=double(1)/x;
            n=n*-1;
        }
        if (n==0){return 1;}
        double y=pw(x,n/2);
        if (n%2==0)
        {
            return y*y;
        }
        else
        {
            return y*y*x;
        }
    }
    double myPow(double x, int n) {
        return pw(x,n);
        
    }
};
