class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        //set<int> s;
        int maxid;
        for (int i=0;i<nums.size();i++)
        {
            if (i==0)
            {
                mp[nums[i]]++;
                maxid=nums[i];
            }
            else
            {
                mp[nums[i]]++;
                if (mp[nums[i]]>=mp[maxid])
                {
                    maxid=nums[i];
                }
            }
        }
        return maxid;
        
    }
};
