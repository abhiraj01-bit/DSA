/*
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>>adj(V);
        vector<int>dist(V,INT_MAX);
        dist[src]=0;
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            int w=i[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        while(!pq.empty()){
            auto[d,u]=pq.top();
            pq.pop();
            for(auto i:adj[u]){
                int v=i.first;
                int w=i.second;
                if(d+w<dist[v]){
                    dist[v]=d+w;
                    pq.push({dist[v],v});
                }
            }
        }
        return dist;
    }
};*/