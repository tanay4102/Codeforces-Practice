class Solution {
public:
    int max(int a,int b)
    {
        return (a<b?b:a);    
    }
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0){return 0;}
        map<char,int> counter;
        map<char,int> mp;
        int maxi=INT_MIN;
        int ind=0;
        int c=0;
        while(c!=s.size())
        {
            if (counter[s[c]]==0)
            {
                ind=ind+1;
                maxi=max(maxi,ind);
                mp[s[c]]=c;
                counter[s[c]]++;
                c++;
            }
            else
            {
                c=mp[s[c]]+1;
                //std::cout<<s[c];
                map<char,int> temp1;
                map<char,int> temp2;
                temp2[s[c]]=c;
                mp=temp2;
                temp1[s[c]]=1;
                counter=temp1;
                ind=1;
                maxi=max(maxi,ind);
                c++;
            }
        }
        return maxi;
        
    }
};
