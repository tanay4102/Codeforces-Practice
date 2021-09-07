/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void lot(TreeNode* root,  vector<vector<int>> &l,int level)
    {
        vector<int> temp;
        if (root==NULL)
        {
            return;
        }
        else
        {
            if (l.size()==level)
            {
                l.push_back(temp);
            }
            l[level].push_back(root->val);
            lot(root->left,l,level+1);
            lot(root->right,l,level+1);
        }
    }
    void reverse(vector<int> &level)
    {
        for (int i=0;i<(level.size()/2);i++)
        {
            int temp=level[i];
            level[i]=level[level.size()-1-i];
            level[level.size()-1-i]=temp;
        }
        return;
    }    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==NULL){return ans;}
        lot(root,ans,0);
        int lr=1;
        for (int i=0;i<ans.size();i++)
        {
            if (lr==1)
            {
                lr=lr;
            }
            else
            {
                reverse(ans[i]);
            }
            lr=-1*lr;
        }
        return ans;
        
    }
};
