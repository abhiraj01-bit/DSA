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
void create(TreeNode* root,unordered_map<int, vector<int>>& adj) {

        if(root == NULL)
            return;

        if(root->left) {
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
        }

        if(root->right) {
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
        }

        create(root->left, adj);
        create(root->right, adj);
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>>adj;
        create(root,adj);
        unordered_set<int>vis;
        queue<int>q;
        int count=-1;
        q.push(start);
        vis.insert(start);
        while(!q.empty()){
            int s=q.size();
            count++;
            for(int i=0;i<s;i++){
                int u=q.front();
                q.pop();
                for(int e:adj[u]){
                    if(vis.find(e)==vis.end()){
                        vis.insert(e);
                        q.push(e);
                    }
                }
            }
        }
        return count;
    }
};*/