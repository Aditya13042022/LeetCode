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
    TreeNode* helper(vector<int>ans,int l,int r)
    {
        if(l>r) return NULL;
        int m=l+(r-l)/2;
        TreeNode* temp = new TreeNode(ans[m]);
        temp->left=helper(ans,l,m-1);
        temp->right=helper(ans,m+1,r);
        return temp;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
        
    }
};