class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor==INT_MIN && dividend!=INT_MIN)
        {
            return 0;
        }
        if (dividend==INT_MIN && (divisor==-1 || divisor==1))
        {
            if (divisor==-1)
            {
                return INT_MAX;
            }
            else
            {
                return INT_MIN;
            }
            return INT_MAX;
        }
        int num1;
        dividend==INT_MIN? num1=INT_MAX : num1=abs(dividend); 
        int num2;
        divisor==INT_MIN? num2=INT_MAX : num2=abs(divisor);
        int or1,or2;
        or1=num1;
        or2=num2;
        if (num2>num1)
        {
            return 0;
        }
        int sign=1;
        if ((dividend<0 && divisor>0) || (dividend>0 && divisor<0))
        {
            sign=-1;
        }
        int q=1;
        int ans=0;
        while (true)
        {
            if (num1-num2<abs(or2))
            {
                if (dividend==INT_MIN && num1-num2==num2-1)
                {
                    ans=ans+q+1;
                    return ans*sign;
                }
                ans=ans+q;
                return ans*sign;
            }
            else
            {
                if (num2>num1-num2)
                {
                    num1=num1-num2;
                    num2=abs(or2);
                    ans=ans+q;
                    q=1;
                }
                else
                {
                    num2=num2+num2;
                    q=q+q;
                }
            }
        }
        return ans;
        
    }
};
