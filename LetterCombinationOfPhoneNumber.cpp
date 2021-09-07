class Solution {
public:
    void backtrack(vector<string> &ans,string currstr,string digits,int i,map<int,vector<string>> counter)
    {
        if (currstr.size()==digits.size())
        {
            ans.push_back(currstr);
            return;
        }
        int j=digits[i]-'0';
        for  (int a=0;a<counter[j].size();a++)
        {
            backtrack(ans,currstr+counter[j][a],digits,i+1,counter);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.size()==0) {return ans;}
        map<int,vector<string>> counter;
        counter[2]={"a","b","c"};
        counter[3]={"d","e","f"};
        counter[4]={"g","h","i"};
        counter[5]={"j","k","l"};
        counter[6]={"m","n","o"};
        counter[7]={"p","q","r","s"};
        counter[8]={"t","u","v"};
        counter[9]={"w","x","y","z"};
        backtrack(ans,"",digits,0,counter);
        return ans;
    }
};
