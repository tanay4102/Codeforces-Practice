class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> an;
        set<string> s;
        for (int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            s.insert(temp);
            an[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto i : s)
        {
            ans.push_back(an[i]);
        }
        return ans;
    }
};
