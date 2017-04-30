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
    void func(TreeNode *root, int &prev,int &diff)
    {
        if(root == NULL)
          return;
        
        func(root->left,prev,diff);
        if(prev != -1)
        {
            diff = min(diff, abs(prev-root->val));
        }
        prev = root->val;
        func(root->right,prev,diff);
    }
    int getMinimumDifference(TreeNode* root) {
        int prev = -1, diff = INT_MAX;
        func(root,prev,diff);
        return diff;
    }
};
