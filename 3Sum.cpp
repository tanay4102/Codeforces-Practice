class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        if (nums.size()<3)
        {
            return ans;
        }
        vector<int> temp;
        temp=nums;
        sort(temp.begin(),temp.end());
        set<vector<int>> s;
        for (int i=0;i<temp.size();i++)
        {
            int j=i+1;
            int k=temp.size()-1;
            while (j<k)
            {
                if (temp[i]+temp[j]+temp[k]==0)
                {
                    s.insert({temp[i],temp[j],temp[k]});
                    j++;
                    k--;
                }
                if (temp[i]+temp[j]+temp[k]>0)
                {
                    k--;
                }
                if (temp[i]+temp[j]+temp[k]<0)
                {
                    j++;
                }
                if (j>=k)
                {
                    break;
                }
            }
        }
        for (auto i : s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
