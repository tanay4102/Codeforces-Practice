class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp (nums.size(),1);
        int n=nums.size()-1;
        for (int i=n;i>=0;i--)
        {
            if (i==n)
            {
                dp[i]=1;
            }
            else
            {
                for (int j=i+1;j<n+1;j++)
                {
                    if (nums[i]<nums[j])
                    {
                        dp[i]=std::max(dp[i],dp[j]+1);
                    }
                }
            }
        }
        int maximum=0;
        for (int i=0;i<n+1;i++)
        {
            //std::cout<<dp[i];
            maximum=std::max(maximum,dp[i]);
        }
        return maximum;
    }
};
