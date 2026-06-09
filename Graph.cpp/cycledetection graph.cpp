/*gfg
class Solution {
  public:
  bool dfs(int src,int par,vector<bool>&vis,vector<vector<int>>& adj){
      vis[src]=true;
      for(int i:adj[src]){
          if(!vis[i]){
              if(dfs(i,src,vis,adj)){
                  return true;
              }
          }
          else if(i!=par){
                  return true;
              }
      }
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
       vector<vector<int>>adj(V);
       for(auto i:edges){
           int u=i[0];
           int v=i[1];
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i])
            {if(dfs(i,-1,vis,adj)){
            return true;
        }
            }
        }
        return false;
    }
};*/