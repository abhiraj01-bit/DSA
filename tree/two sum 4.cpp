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
void dfs(vector<int>&arr,TreeNode* root){
    if(root==NULL){
        return;
    }
    dfs(arr,root->left);
    int n=root->val;
    arr.push_back(n);
    dfs(arr,root->right);
}
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL){
            return false;
        }
        vector<int>arr;
        dfs(arr,root);
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==k){
                return true;
                break;
            }
            if(sum<k){
                i++;
            }

            if(sum>k){
                j--;
            }
        }
        return false;
    }
};*/