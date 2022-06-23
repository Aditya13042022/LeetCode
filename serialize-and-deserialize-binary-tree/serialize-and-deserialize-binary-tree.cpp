/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*> q;
        string encoding="";
        if(root==NULL)
        {
            encoding+='N';
            return encoding;
        }
        q.push(root);
        int count=1;
        while(!q.empty())
        {
            while(count>0)
            {
                TreeNode* temp= q.front();
                q.pop();
                count--;
                if(temp!=NULL)
                {
                    string tmp=to_string(temp->val);
                    encoding+=tmp;
                    encoding+=',';
                }
                else
                {
                    encoding+='N';
                    encoding+=',';
                }
                if(temp!=NULL)
                {
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            count=q.size();
        }
        return encoding;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
         if (data.length() == 1)
            return NULL;
        int right = 0;
        int left=0;
        queue<TreeNode*> qu;
        string number = "";
        while (right < data.length() && data[right] != ','){
            number += data[right];
            right++;
        }
        int num = stoi(number);
        number.clear();
        TreeNode* root = new TreeNode(num);
        qu.push(root);
        int count = 1;
        while (!qu.empty()){
            while (count > 0){
                TreeNode* node = qu.front();
                qu.pop();
                count--;
                left = right + 1;
                while (left < data.length() && data[left] != ','){
                    number+=data[left];
                    left++;
                }
                if (number != "N"){
                    num = stoi(number);
                    node->left = new TreeNode(num);
                    qu.push(node->left);
                    number.clear();
                }
                else
                    number.clear();
                right = left+1;
                while (right < data.length() && data[right] != ','){
                    number+=data[right];
                    right++;
                }
                if (number != "N"){
                    num = stoi(number);
                    node->right = new TreeNode(num);
                    qu.push(node->right);
                    number.clear();
                }
                else
                    number.clear();
            }
            count = qu.size();
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));