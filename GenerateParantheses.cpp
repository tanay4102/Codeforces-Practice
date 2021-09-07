class Solution {
public:
    vector<string> utils (int n)
    {
        vector<string> ans;
        if (n==1)
        {
            ans.push_back("()");
            return ans;
        }
        vector<vector<string>> temp2;
        for (int i=1;i<=n-1;i++)
        {
            temp2.push_back(utils(i));
        }
        set<string> temp;
        for (int i=0;i<temp2[n-2].size();i++)
        {
            string s1="";
            s1=s1+"("+temp2[n-2][i]+")";
            temp.insert(s1);
        }
        for (int i=1;i<=n/2;i++)
        {
            for (int j=0;j<temp2[i-1].size();j++)
            {
                for (int k=0;k<temp2[n-i-1].size();k++)
                {
                    string s1=temp2[i-1][j]+temp2[n-i-1][k];
                    temp.insert(s1);
                    string s2=temp2[n-i-1][k]+temp2[i-1][j];
                    temp.insert(s2);
                }
            }
        }
        for (auto i : temp)
        {
            ans.push_back(i);
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        return utils(n);
        
    }
};
