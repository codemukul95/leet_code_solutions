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
    void sumUtil(TreeNode *root, int &sum, int l, int r){
        if(root == NULL)
            return;
        
        if(root->val >= l && root->val <= r){
            sum += root->val;
            sumUtil(root->left,sum,l,r);
            sumUtil(root->right,sum,l,r);
        }
        else if(root->val < l){
            sumUtil(root->right,sum,l,r);
        }
        else if(root->val > r){
            sumUtil(root->left,sum,l,r);
        }
        else{
            return;
        }
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        sumUtil(root,sum,L,R);
        return sum;
    }
};
