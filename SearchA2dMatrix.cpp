class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix.size()-1;
        int j=0;
        int n=matrix[0].size();
        while (true)
        {
            if (matrix[i][j]==target)
            {
                return true;
            }
            else if (matrix[i][j]<target)
            {
                if (j==n-1)
                {
                    return false;
                }
                j=j+1;
            }
            else
            {
                if (i==0)
                {
                    return false;
                }
                i=i-1;
            }
        }
        return false;
    }
};
