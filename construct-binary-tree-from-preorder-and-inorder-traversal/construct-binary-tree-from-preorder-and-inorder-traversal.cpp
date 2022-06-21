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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         if(inorder.size()!=preorder.size()) return NULL;
        map<int,int> hm;
        for(int i=0;i<inorder.size();i++)
            hm[inorder[i]]=i;
        
        return build(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,hm);
    }
     TreeNode* build(vector<int> &inorder,int is,int ie,vector<int> &preorder,int ps,int pe,map<int,int>&hm)
    {
        if(ps>pe || is>ie) return NULL;
        TreeNode *root=new TreeNode(preorder[ps]);
        
        int inroot=hm[preorder[ps]];
        int numsleft=inroot-is;
        
        root->left=build(inorder,is,inroot-1,preorder,ps+1,ps+numsleft,hm);
        root->right=build(inorder,inroot+1,ie,preorder,ps+numsleft+1,pe,hm);
        
        return root;
    }
};