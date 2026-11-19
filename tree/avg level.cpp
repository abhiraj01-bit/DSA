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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            double sum=0;
            for(int i=0;i<s;i++){
                TreeNode* u=q.front();
                double n=u->val;
                q.pop();
                sum+=n;
                if(u->left){
                    q.push(u->left);
                }
                if(u->right){
                    q.push(u->right);
                }
            }
            ans.push_back(sum/s);
        }
        return ans;
    }
};*/