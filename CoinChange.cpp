class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount==0)
        {
            return 0;
        }
        vector<int> amounts (amount+1,INT_MAX);
        for (int i=0;i<coins.size();i++)
        {
            if (coins[i]<amounts.size())
            {
                amounts[coins[i]]=1;
            }
        }
        for (int i=0;i<amounts.size();i++)
        {
            for (int j=0;j<coins.size();j++)
            {
                if (i-coins[j]>=0)
                {
                    amounts[i]=std::min(std::min(amounts[i-coins[j]],INT_MAX-1)+1,amounts[i]);
                }
            }
        }
        if (amounts[amount]==INT_MAX)
        {
            return -1;
        }
        else
        {
            return amounts[amount];
        }
        return -1;
    }
};class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount==0)
        {
            return 0;
        }
        vector<int> amounts (amount+1,INT_MAX);
        for (int i=0;i<coins.size();i++)
        {
            if (coins[i]<amounts.size())
            {
                amounts[coins[i]]=1;
            }
        }
        for (int i=0;i<amounts.size();i++)
        {
            for (int j=0;j<coins.size();j++)
            {
                if (i-coins[j]>=0)
                {
                    amounts[i]=std::min(std::min(amounts[i-coins[j]],INT_MAX-1)+1,amounts[i]);
                }
            }
        }
        if (amounts[amount]==INT_MAX)
        {
            return -1;
        }
        else
        {
            return amounts[amount];
        }
        return -1;
    }
};
