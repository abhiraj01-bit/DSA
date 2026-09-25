/*class Solution {
public:

    bool dfs(int src, vector<bool>& rec,
             vector<bool>& vis,
             vector<vector<int>>& adj,
             vector<int>& nums, int dir) {

        vis[src] = true;
        rec[src] = true;

        for(int i : adj[src]) {

            if((nums[i] > 0) != (dir > 0)) {
                continue;
            }

            if(i == src) {
                continue;
            }

            if(!vis[i]) {
                if(dfs(i, rec, vis, adj, nums, dir)) {
                    return true;
                }
            }
            else if(rec[i]) {
                return true;
            }
        }

        rec[src] = false;
        return false;
    }

    bool circularArrayLoop(vector<int>& nums) {

        int n = nums.size();

        vector<vector<int>> adj(n);

        for(int i = 0; i < n; i++) {

            int index = ((i + nums[i]) % n + n) % n;

            adj[i].push_back(index);
        }

        vector<bool> vis(n, false);
        vector<bool> rec(n, false);

        for(int i = 0; i < n; i++) {

            if(!vis[i]) {

                if(dfs(i, rec, vis, adj, nums, nums[i])) {
                    return true;
                }
            }
        }

        return false;
    }
};*/