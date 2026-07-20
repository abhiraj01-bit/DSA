/*class Solution {
public:

    void solve(vector<vector<int>>& ans,vector<int>& curr,TreeNode* root,int t) {
        if(root==NULL){
            return;
        }
        curr.push_back(root->val);
        t -= root->val;
        if(root->left==NULL && root->right==NULL){
            if(t==0){
                ans.push_back(curr);
            }
            curr.pop_back();
            return;
        }
        solve(ans,curr,root->left,t);
        solve(ans,curr,root->right,t);
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        vector<int> curr;

        solve(ans,curr,root,targetSum);

        return ans;
    }
};*/