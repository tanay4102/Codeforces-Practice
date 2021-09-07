class Solution {
public:
    
    int r;
    int c;
    int neighbor[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<char>>grid;
    
    bool dfs(string &s, int curr, int x, int y)
    {
        if(curr==s.length()-1) return true;
        
        char t = grid[x][y];
        grid[x][y] = '#';
        bool res = false;
        int px,py;
        for(int i=0;i<4;i++)
        {
            px = x + neighbor[i][0];
            py = y + neighbor[i][1];
            
            if(px>=0 && px<r && py>=0 && py<c && grid[px][py]==s[curr+1])
            {                
                res |= dfs(s,curr+1,px,py);
                if(res)break;
            }
        }
        
        grid[x][y] = t;
        return res;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
    
        r = board.size();
        c = board[0].size();
        
        if(word.length()>r*c) return false;
        
        grid = board;        
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(word,0,i,j))return true;
                }
            }
        }
        
        return false;
    }
};
