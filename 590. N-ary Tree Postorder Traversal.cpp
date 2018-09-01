class Solution {
public:
    void postOrderUtil(Node *root,vector<int> &v){
        if(root == NULL)
            return;
        else{
            for(int i=0;i<root->children.size();i++){
                postOrderUtil(root->children[i],v);
            }
            v.push_back(root->val);
        }
    }
    vector<int> postorder(Node* root) {
        vector<int> v;
        postOrderUtil(root,v);
        return v;
        
    }
};
