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
int solve(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int left=solve(root->left)+1;
    int right=solve(root->right)+1;
    return max(left,right);
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int curr=abs(solve(root->left)-solve(root->right));
        if(curr>1){
            return false;
        }
        return isBalanced(root->left)&&isBalanced(root->right);
    }
};*/