/*class Solution {
public:
bool iscycledfs(int src,int par,vector<bool>&vis,vector<vector<int>>&adj){
    vis[src]=true;
    for(int u:adj[src]){
        if(!vis[u]){
            if(iscycledfs(u,src,vis,adj)){
                return true;
            }
        }
        else if(u!=par){
            return true;
        }
    }
    return false;
}
bool iscycle(int n,vector<vector<int>>&adj){
    vector<bool>vis(n+1,false);
    for(int i=0;i<n;i++){
        if(!vis[i]){
        if(iscycledfs(i,-1,vis,adj)){
            return true;
        }
    }
    }
     return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>>adj(n+1);
        for(auto &e:edges){
        int u=e[0];
        int v=e[1];
          adj[u].push_back(v);
          adj[v].push_back(u);
          if(iscycle(n,adj)){
            return e;
          }
        }
        return {};
    }
};*/