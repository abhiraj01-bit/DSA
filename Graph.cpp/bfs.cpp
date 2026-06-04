/*gfg
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V=adj.size();
        vector<bool>vis(V,false);
        vector<int>ans;
        queue<int>q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(int v:adj[u]){
                if(!vis[v]){
                    q.push(v);
                    vis[v]=true;
                }
            }
        }
        return ans;
    }
};*/