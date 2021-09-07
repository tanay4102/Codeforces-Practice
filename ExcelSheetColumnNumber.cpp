class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int n=columnTitle.size();
        for (int i=0;i<columnTitle.size()-1;i++)
        {
            int y = columnTitle[i]-'A';
            int temp=y*pow(26,n-1-i);
            ans=ans+temp;
        }
        ans=ans+(columnTitle[n-1]-'A'+1);
        if (n!=1)
        {
            int temp2=(pow(26,n-1)-1)/25;
            temp2=temp2*26;
            ans=ans+temp2;
        }
        return ans;
        
    }
};
