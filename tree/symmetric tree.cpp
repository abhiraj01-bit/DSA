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
    bool isSymmetric(TreeNode* root) {
        queue<pair<TreeNode*,TreeNode*>>qu;
        qu.push({root->left,root->right});
        while(!qu.empty()){
            auto[n1,n2]=qu.front();
            qu.pop();
            if(n1==NULL&&n2==NULL){
                continue;
            }
            if(n1==NULL&&n2!=NULL||n1!=NULL&&n2==NULL){
                return false;
            }
            if(n1->val!=n2->val){
                return false;
            }
            qu.push({n1->left,n2->right});
            qu.push({n1->right,n2->left});
        }
        return true;
    }
};*/