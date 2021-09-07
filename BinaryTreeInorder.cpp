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
    void inOrder(TreeNode* root, vector<int> &in)
    {
        if (root==NULL)
        {
            return;
        }
        else
        {
            inOrder(root->left,in);
            in.push_back(root->val);
            inOrder(root->right,in);
        }
    }
        
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inOrder(root,ans);
        return ans;
        
    }
};
