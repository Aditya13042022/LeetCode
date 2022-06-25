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
    int leftheight(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lh=leftheight(root->left);
        int rh=rightheight(root->right);
        return 1+max(lh,rh);
    }
     int rightheight(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lh=leftheight(root->left);
        int rh=rightheight(root->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh=leftheight(root->left);
        int rh=rightheight(root->right);
        if(abs(lh-rh)>1) return false;
        
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        
        if(!l || !r) return false;
        return true;
        
    }
};