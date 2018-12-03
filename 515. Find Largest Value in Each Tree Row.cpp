/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define pb push_back

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q1;
        queue<int> q2;
        vector<int> vals;
        if(root == NULL)
            return vals;
        
        q1.push(root);
        q2.push(0);
        int prev_level = 0, max_val = root->val;
        while(!q1.empty()){
            int l  = q2.front();
            TreeNode *node = q1.front();
            if(l > prev_level){
                vals.pb(max_val);
                prev_level = l;
                max_val = node->val;
            }
            else{
                max_val = max(max_val, node->val);
            }
            if(node->left){
                q1.push(node->left);
                q2.push(l+1);
            }
            if(node->right){
                q1.push(node->right);
                q2.push(l+1);
            }
            q1.pop();
            q2.pop();
            if(q1.empty()){
                vals.pb(max_val);
            }
        }
        return vals;
    }
};
