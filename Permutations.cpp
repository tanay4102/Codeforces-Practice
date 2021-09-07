class Solution {
public:
    void perm(map<int,bool>& visited,vector<int>& p, vector<int>& nums,vector<vector<int>>&ans)
    {
        if (p.size()==nums.size())
        {
            ans.push_back(p);
        }
        for (int i=0;i<nums.size();i++)
        {
            if (!visited[nums[i]])
            {
                vector<int> temp;
                for (int j=0;j<p.size();j++)
                {
                    temp.push_back(p[j]);
                }
                visited[nums[i]]=true;
                temp.push_back(nums[i]);
                perm(visited,temp,nums,ans);
                visited[nums[i]]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int,bool> mp;
        perm(mp,temp,nums,ans);
        return ans;
    }
};
