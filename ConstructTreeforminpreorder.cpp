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
    TreeNode* transversal (vector<int> &preorder,int pstart,int pend,vector<int> &inorder,int istart,int iend)
    {
        std::cout<<preorder[pstart];
        std::cout<<pend;
        std::cout<<"\n";
        if (pstart-pend>0)
        {
            return NULL;
        }
        TreeNode* ans = new TreeNode();
        ans->val=preorder[pstart];
        if (pstart==pend)
        {
            return ans;
        }
        //int num=pend-pstart+1;
        int rd;
        for (int i=istart;i<=iend;i++)
        {
            if (inorder[i]==preorder[pstart])
            {
                rd=i;
                break;
            }
        }
        int ll=rd-istart;
        int rl=iend-rd;
        if (ll!=0)
        {
            ans->left=transversal(preorder,pstart+1,pstart+ll,inorder,istart,rd-1);
        }
        if (rl!=0)
        {
            ans->right=transversal(preorder,pstart+ll+1,pstart+ll+rl,inorder,rd+1,iend);   
        }
        return ans;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        return transversal(preorder,0,n-1,inorder,0,n-1);
    }
};
