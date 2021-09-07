class Solution {
public:
    string twoP(int i,string s)
    {
        string ans (1,s[i]);
        string temp(1,s[i+1]);
        ans=ans+temp;
        int l=i-1;
        int r=i+2;
        if (l>=0 && r<s.size())
        {
            while(s[l]==s[r])
            {
                //ans=ans+2;
                string left(1,s[l]);
                string right(1,s[r]);
                ans=left+ans+right;
                l=l-1;
                r=r+1;
                if (l<0 || r>=s.size())
                {
                    break;
                }
            }
        }
        return ans;
    }
    string threeP(int i,string s)
    {
        string ans (1,s[i]);
        int l=i-1;
        int r=i+1;
        if (l>=0 && r<s.size())
        {
            while(s[l]==s[r])
            {
                //ans=ans+2;
                string left(1,s[l]);
                string right(1,s[r]);
                ans=left+ans+right;
                l=l-1;
                r=r+1;
                if (l<0 || r>=s.size())
                {
                    break;
                }
            }
        }
        return ans;
    }
    string cmp(string a, string b)
    {
        if (a.size()>b.size())
        {
            return a;
        }
        return b;
    }
    bool isPalindrome(string(s))
    {
        for (int i=0;i<s.size();i++)
        {
            if (s[i]!=s[s.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        if (s.size()==1)
        {
            return s;
        }
        if (isPalindrome(s))
        {
            return s;
        }
        vector<int> twos;
        vector<int> threes;
        for (int i=0;i<s.size()-1;i++)
        {
            if (s[i]==s[i+1])
            {
                twos.push_back(i);
            }
        }
        for (int i=1;i<s.size()-1;i++)
        {
            if (s[i-1]==s[i+1])
            {
                threes.push_back(i);
            }
        }
        string maxi(1,s[0]);
        for (int j=0;j<twos.size();j++)
        {
            maxi=cmp(maxi,twoP(twos[j],s));
        }
        for (int j=0;j<threes.size();j++)
        {
            maxi=cmp(maxi,threeP(threes[j],s));
        }
        return maxi;
    }
};
