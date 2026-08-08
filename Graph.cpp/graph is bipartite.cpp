/*class Solution {
public:
bool dfs(int src,vector<vector<int>>& graph,vector<int>&vis){
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
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,-1);
        for(int i = 0; i < n; i++) {

            if(vis[i] == -1) {

                vis[i] = 0;

                if(dfs(i, graph, vis) == false) {
                    return false;
                }
            }
        }

        return true;
    }
};*/