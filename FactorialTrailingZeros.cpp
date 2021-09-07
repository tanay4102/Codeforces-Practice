class Solution {
public:
    int trailingZeroes(int n) {
        vector<int> five(n+1,0);
        int ans=0;
        for (int i=0;i<n+1;i++)
        {
            int f=5;
            int num=1;
            while (i%f==0 && i!=0)
            {
                f=f*5;
                num=num+1;
            }
            ans=ans+num-1;
        }
        return ans;
        
    }
};
