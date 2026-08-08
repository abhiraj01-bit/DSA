/*class Solution {
public:
bool dfs(int src,vector<vector<int>>&graph,vector<int>&vis){
    for(int i : graph[src]){
        if(vis[i]==vis[src]){
            return false;
        }
        if(vis[i]==-1){
            vis[i]=1-vis[src];
            if(dfs(i,graph,vis)==false){
                return false;
            }
        }
    }
    return true;
}
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>graph(n+1);
        for(int i=0;i<dislikes.size();i++){
            int u=dislikes[i][0];
            int v=dislikes[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int x=graph.size();
        vector<int>vis(n+1,-1);
        for(int i=1;i<=n;i++){
            if(vis[i]==-1){
                vis[i]=0;
                if(!dfs(i,graph,vis)){
                    return false;
                }
            }
        }
        return true;
    }
};*/