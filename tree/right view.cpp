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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL){
            return{};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            vector<int>curr;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                int p=n->val;
                curr.push_back(p);
                if(n->right){
                    q.push(n->right);
                }
                if(n->left){
                    q.push(n->left);
                }
            }
            int i=curr[0];
            ans.push_back(i);
        }
        return ans;
    }
};*/