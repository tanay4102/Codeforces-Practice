class Solution {
public:
    void add1 (vector<int> & bin)
    {
        int carry=1;
        for (int i=0;i<bin.size();i++)
        {
            if (bin[i]==1)
            {
                bin[i]=0;
            }
            else
            {
                carry=0;
                bin[i]=1;
                break;
            }
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> bin (nums.size(),0);
        vector<vector<int>> ans;
        int ind = pow(2,nums.size());
        while (ind!=0)
        {
            vector<int> temp;
            for (int i=0;i<bin.size();i++)
            {
                if (bin[i]==1)
                {
                    temp.push_back(nums[i]);
                }
            }
            add1(bin);
            ans.push_back(temp);
            ind--;
        }
        return ans;
        
    }
};
