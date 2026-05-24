/*leetcode
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
/*class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        if(!root->left&&!root->right){
            return 1;
        }
        int sl=minDepth(root->left);
        int sr=minDepth(root->right);
        if(!root->left){
            return sr+1;
        }
        if(!root->right){
            return sl+1;
        }
        return min(sl,sr)+1;
    }
};*/