/*class Solution {
public:

    void create(TreeNode* root,
                unordered_map<int, vector<int>>& adj) {

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
    void solve(int src, int count,unordered_map<int, vector<int>>& adj,unordered_set<int>& vis,vector<int>& ans,int k) {
        if(count == k) {
            ans.push_back(src);
            return;
        }
        vis.insert(src);
        for(int e : adj[src]) {
            if(vis.find(e) == vis.end()) {
                solve(e, count + 1, adj, vis, ans, k);
            }
        }
    }
    vector<int> distanceK(TreeNode* root,TreeNode* target, int k) {
        vector<int> ans;

        if(root == NULL){
            return ans;
        }
        unordered_map<int, vector<int>> adj;
        unordered_set<int> vis;
        create(root, adj);
        solve(target->val, 0, adj, vis, ans, k);
        return ans;
    }
};*/