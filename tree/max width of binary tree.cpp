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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long long ans=0;
        while(!q.empty()){
            int n=q.size();
            long long s=q.front().second;
            long long e=q.back().second;
            ans=max(ans,e-s+1);
            for(int i=0;i<n;i++){
                TreeNode* p=q.front().first;
                long long x=q.front().second;
                q.pop();
                if(p->left){
                    q.push({p->left,2*x+1});
                }
                if(p->right){
                    q.push({p->right,2*x+2});
                }
            }
        }
        return ans;
    }
};*/