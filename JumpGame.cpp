class Solution {
public:
    int min(int a,int b)
    {
        return a<b?a:b;
    }
    int max(int a,int b)
    {
        return a<b?b:a;
    }
    bool canJump(vector<int>& nums) {
        int dist=-1;
        for (int i=0;i<nums.size();i++)
        {
            dist=max(dist,nums[i]);
            if (dist==0 && i!=nums.size()-1)
            {
                return false;
            }
            dist--;
        }
        return true;
    }
};
