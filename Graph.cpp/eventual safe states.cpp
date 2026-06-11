/*leetcode
class Solution {
public:
bool dfs(int src,vector<vector<int>>& graph,vector<bool>&vis,vector<bool>&path,vector<bool>&check){
    vis[src]=true;
    path[src]=true;
    for(int i:graph[src]){
        if(!vis[i]){
            if(dfs(i,graph,vis,path,check)){
                return true;
            }
        }
        else if(path[i]){
            return true;
        }
    }
    path[src]=false;
    check[src]=1;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<bool>check(V,0);
        vector<bool>vis(V,false);
        vector<bool>path(V,false);
        for(int i=0;i<V;i++){
            dfs(i,graph,vis,path,check);
        }
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(check[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};*/