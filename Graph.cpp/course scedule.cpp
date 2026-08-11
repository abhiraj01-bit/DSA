/*class Solution {
public:
bool dfs(int src,vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&rec){
    vis[src]=true;
    rec[src]=true;
    for(int i:adj[src]){
        if(!vis[i]){
            if(dfs(i,adj,vis,rec)){
                return true;
            }
        }
        else if(rec[i]){
            return true;
        }
    }
    rec[src]=false;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto &i:prerequisites){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        vector<bool>vis(numCourses);
        vector<bool>rec(numCourses);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,rec)){
                    return false;
                }
            }
        }
        return true;
    }
};*/