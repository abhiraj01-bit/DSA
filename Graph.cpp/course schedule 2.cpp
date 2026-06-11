/*
class Solution {
  public:
  bool dfs(int src,vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&path,stack<int>&s){
      vis[src]=true;
      path[src]=true;
      for(int i:adj[src]){
          if(!vis[i]){
              if(dfs(i,adj,vis,path,s)){
                  return true;
              }
          }
          else if(path[i]){
              return true;
          }
      }
      path[src]=false;
      s.push(src);
      return false;
  }
  void topo(stack<int>&s,vector<int>ans){
      while(!s.empty()){
          ans.push_back(s.top());
          s.pop();
      }
  }
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<vector<int>>adj(n);
        for(auto i:prerequisites){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        stack<int>s;
         vector<bool>vis(n,false);
         vector<bool>path(n,false);
         vector<int>ans;
         for(int i=0;i<n;i++){
             if(!vis[i]){
                 if(dfs(i,adj,vis,path,s)){
                     return {};
                 }
             }
         }
        topo(s,ans);
         return ans;
    }
};*/
