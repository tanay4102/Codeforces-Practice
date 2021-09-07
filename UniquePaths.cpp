class Solution {
public:
    int uniquePaths(int m, int n) {
        vector <int> x_cor = {0,1};
        vector<int> y_cor = {1,0};
        vector<vector<int>> dp (m, vector<int> (n,0));
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<vector<bool>> visited (m,vector<bool>(n,false));
        visited[0][0]=true;
        while(!q.empty())
        {
            pair<int,int> temp;
            temp=q.front();
            q.pop();
            int x=temp.first;
            int y=temp.second;
            dp[0][0]=1;
            for (int i=0;i<2;i++)
            {
                int x1=x+x_cor[i];
                int y1=y+y_cor[i];
                if (x1<m && y1<n)
                {
                    if (!visited[x1][y1])
                    {
                        q.push({x+x_cor[i],y+y_cor[i]});
                        visited[x1][y1]=true;
                    }
                    dp[x1][y1]=dp[x][y]+dp[x1][y1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};
