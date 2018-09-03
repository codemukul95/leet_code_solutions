/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool pruneTreeUtil(TreeNode* &root){
        if(root == NULL){
            return true;
        }
        bool l = pruneTreeUtil(root->left);
        bool r = pruneTreeUtil(root->right);
        if(l){
            delete root->left;
            root->left = NULL;
        }
        if(r){
            delete root->right;
            root->right = NULL;
        }
        
        bool notContainsOne = true;
        if(root->val == 1){
            notContainsOne = false;
        }
        
        return notContainsOne && l && r;
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        pruneTreeUtil(root);
        return root;
    }
};
