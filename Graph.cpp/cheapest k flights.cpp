/*leetcode
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto i:flights){
            int u=i[0];
            int v=i[1];
            int p=i[2];
            adj[u].push_back({v,p});
        }
        queue<tuple<int,int,int>>q;
        vector<int>price(n,INT_MAX);
        price[src]=0;
        q.push({0,src,-1});
        while(!q.empty()){
            auto[t,u,s]=q.front();
            q.pop();
            for(auto i:adj[u]){
                int v=i.first;
                int tt=i.second;
                if(price[v]>t+tt&&s<k){
                    price[v]=t+tt;
                    q.push({price[v],v,s+1});
                }
            }
        }
        if(price[dst]==INT_MAX){
            return -1;
        }
        return price[dst];
    }
};*/