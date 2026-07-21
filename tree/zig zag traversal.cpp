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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int s=q.size();
            vector<int>curr;
            for(int i=0;i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                int p=n->val;
                curr.push_back(p);
                    if(n->left){
                        q.push(n->left);
                    }
                    if(n->right){
                        q.push(n->right);
                    }
            }
            if(flag==true){
                ans.push_back(curr);
                flag=false;
            }
            else{
                reverse(curr.begin(),curr.end());
                ans.push_back(curr);
                flag=true;
            }
        }
        return ans;
    }
};*/