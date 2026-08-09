/*class Solution {
public:
void dfs(int src,vector<vector<pair<int,int>>>&adj,vector<bool>&vis,int &count){
    vis[src]=true;
    for(auto &i:adj[src]){
        int v=i.first;
        int c=i.second;
        if(!vis[v]){
            if(c==0){
                count++;
            }
            dfs(v,adj,vis,count);
        }
    }
}
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto &e:connections){
            int u=e[0];
            int v=e[1];
            adj[u].push_back({v,0});
            adj[v].push_back({u,1});
        }
        vector<bool>vis(n,false);
        int count=0;
        dfs(0,adj,vis,count);
        return count;
    }
};*/