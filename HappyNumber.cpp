class Solution {
public:
    bool isHappy(int n) {
        //std::cout<<INT_MAX;
        //return false;
        vector<bool> vis (811,false);
        if (n<811)
        {
            vis[n]=true;
        }
        int num=n;
        int ss=0;
        while (true)
        {
            ss=ss+(num%10)*(num%10);
            num=num/10;
            if (num==0)
            {
                num=ss;
                if (vis[ss] && ss!=1)
                {
                    return false;
                }
                if (ss==1)
                {
                    return true;
                }
                vis[ss]=true;
                ss=0;
            }
        }
        return true;
        
    }
};
