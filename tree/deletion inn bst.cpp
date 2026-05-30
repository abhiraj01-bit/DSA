/* leetcode
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
TreeNode* succ(TreeNode* root){
    TreeNode* curr=root;
    while(curr->left){
        curr=curr->left;
    }
    return curr;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==key){
            if(root->left==NULL&&root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->left!=NULL&&root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            if(root->left==NULL&&root->right!=NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            if(root->left!=NULL&&root->right!=NULL){
                root->val=succ(root->right)->val;
                root->right=deleteNode(root->right,root->val);
            }
        }
        else if(key<root->val){
           root->left= deleteNode(root->left,key);
        }
        else{
           root->right= deleteNode(root->right,key);
        }
        return root;
    }
};*/