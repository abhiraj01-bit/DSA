/*gfg
class Solution {
  public:
  void dfs(int src, vector<vector<int>>&adj,vector<bool>&vis){
      vis[src]=true;
      for(int i:adj[src]){
          if(!vis[i]){
              dfs(i,adj,vis);
          }
      }
      return;
  }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count=0;
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(i,adj,vis);
            }
        }
        return count;
    }
};*/