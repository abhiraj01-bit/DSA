/*class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {

        vector<vector<int>> adj(n+1);

        for(auto &e : paths) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> ans(n+1, 0);
        vector<int> a;

        for(int i=1; i<=n; i++) {

            vector<int> vis(5, false);

            for(int e : adj[i]) {
                vis[ans[e]] = true;
            }

            for(int j=1; j<=4; j++) {
                if(!vis[j]) {
                    ans[i] = j;      
                    a.push_back(j);  
                    break;
                }
            }
        }

        return a;
    }
};*/