class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //return {0};
        map<int,int> counter;
        set<int> s;
        for (int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            counter[nums[i]]++;
        }
        vector<int> ans;
        int trig=k;
        while (trig!=0)
        {
            int max=-1;
            int id=0;
            for (auto i : s)
            {
                if (counter[i]>=max)
                {
                    max=counter[i];
                    id=i;
                }
            }
            ans.push_back(id);
            trig--;
            s.discard(id);
        }
        return ans;
    }
};
