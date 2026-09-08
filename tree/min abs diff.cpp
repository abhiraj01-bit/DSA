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
void clac(TreeNode* root,int &val,int &mini){
    if(root==NULL){
        return ;
    }
    clac(root->left,val,mini);
    if(val!=-1){
        mini=min(mini,abs((root->val)-val));
    }
    val=root->val;
    clac(root->right,val,mini);
}
    int getMinimumDifference(TreeNode* root) {
        int mini=INT_MAX;
        int val=-1;
        clac(root,val,mini);
        return mini;
    }
};*/