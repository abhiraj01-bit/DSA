/*leetcode
class Solution {
public:
bool dfs(int src, vector<vector<int>>& adj, vector<bool>& vis,int destination){
    vis[src]=true;
    for(int i:adj[src]){
        if(!vis[i]){
            dfs(i,adj,vis,destination);
        }
    }
    if(vis[destination]){
        return true;
    }
    return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
         vector<vector<int>> adj(n);
        for(auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]); // undirected graph
        }
        vector<bool>vis(n,false);
        if(dfs(source,adj,vis,destination)){
            return true;
        }
        return false;
    }
};*/