/*leetcodeclass Solution {
public:
bool dfs(int src,vector<vector<int>>&graph,vector<bool>&path,vector<bool>&vis){
    vis[src]=true;
    path[src]=true;
    for(int i:graph[src]){
        if(!vis[i]){
            if(dfs(i,graph,path,vis)){
                return true;
            }
        }
        else if(path[i]){
            return true;
        }
    }
    path[src]=false;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        for(auto i:prerequisites){
            int u=i[0];
            int v=i[1];
            graph[u].push_back(v);
        }
        vector<bool>vis(numCourses,false);
        vector<bool>path(numCourses,false);
        for(int i=0;i<numCourses;i++){
            if(dfs(i,graph,path,vis)){
                return false;
            }
        }
        return true;
    }
};*/