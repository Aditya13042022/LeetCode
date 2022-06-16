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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* head=root;
        TreeNode* temp =new TreeNode();
        temp->val = val;
        
        if(root==NULL)
        {
            return temp;
        }
        
        if(val<head->val && head->left==NULL)
            head->left=temp;
            
            
         if(val>root->val && head->right==NULL)
             head->right=temp;
        
        if(val<head->val) insertIntoBST(head->left,val);
        if(val>head->val) insertIntoBST(head->right,val);
        
        return root;
        
    }
};