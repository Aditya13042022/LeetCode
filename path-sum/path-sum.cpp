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

	void tra(TreeNode* curr,int t,int sum,bool &f){
		if(!curr)return; /*Base case for the nodes which are not a leaf and either of it's side id NULL(ex- Node with value 4)*/
		if(curr!=NULL && !curr->left && !curr->right){ /*Base case for leaf Node*/
			sum+=curr->val;
			if(sum==t)f=true;
			return;
		}
		sum+=curr->val;
		tra(curr->left,t,sum,f);
		tra(curr->right,t,sum,f);       
	}

	bool hasPathSum(TreeNode* curr, int t) {
		if(!curr && !t) return false; 
		bool f=false;
		tra(curr,t,0,f);
		return f;
	}
};