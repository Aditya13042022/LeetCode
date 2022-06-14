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
    int minn(TreeNode* node){ // Minimum value in BST
        if(!node->left) return node->val;
        else return minn(node->left);
    }
    
    int maxx(TreeNode* node){ // Maximum value in BST
        if(!node->right) return node->val;
        else return maxx(node->right);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return true;
        if (root->left && root->val <= maxx(root->left)) return false;
        if (root->right && root->val >= minn(root->right)) return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};