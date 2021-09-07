class Solution {
public:
    void setColZero(vector<vector<int>>& matrix,int colnum)
    {
        for (int i=0;i<matrix.size();i++)
        {
            matrix[i][colnum]=0;
        }
    }
    void setRowZero(vector<vector<int>>& matrix,int rownum)
    {
        for (int i=0;i<matrix[rownum].size();i++)
        {
            matrix[rownum][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        bool isrow=false;
        bool iscol=false;
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[i].size();j++)
            {
                if (matrix[i][j]==0 && j==0 && i!=0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    isrow=true;
                }
                if (matrix[i][j]==0 && j!=0 && i==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    iscol=true; 
                }
                if (matrix[i][j]==0 && j==0 && i==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    isrow=true;
                    iscol=true;
                }
                if (matrix[i][j]==0 && j!=0 && i!=0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0; 
                }
            }
        }
        for (int i=1;i<matrix.size();i++)
        {
            if (matrix[i][0]==0)
            {
                setRowZero(matrix,i);
            }
        }
        for (int j=1;j<matrix[0].size();j++)
        {
            if (matrix[0][j]==0)
            {
                setColZero(matrix,j);
            }
        }
        if (matrix[0][0]==0)
        {
            if (iscol)
            {
              setRowZero(matrix,0);  
            }
            if (isrow)
            {
              setColZero(matrix,0);  
            }
        }
    }
};
