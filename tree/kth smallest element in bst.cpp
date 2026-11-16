/*/**
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
/*class Solution {
public:
void sarr(TreeNode* root,vector<int>&s){
    if(root==NULL){
        return;
    }
    sarr(root->left,s);
    s.push_back(root->val);
    sarr(root->right,s);
}
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return 0;
        }
        vector<int>s;
        sarr(root,s);
        return s[k-1];
    }
};*/