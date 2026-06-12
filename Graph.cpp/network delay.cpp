/*leetcode
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto i:times){
            int u=i[0];
            int v=i[1];
            int t=i[2];
            adj[u].push_back({v,t});
        }
        vector<int>time(n+1,INT_MAX);
        time[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        while(!pq.empty()){
            auto[t,u]=pq.top();
            pq.pop();
            for(auto i:adj[u]){
                int v=i.first;
                int tt=i.second;
                if(time[v]>t+tt){
                    time[v]=t+tt;
                    pq.push({time[v],v});
                }
            }
        }
        int tmax=INT_MIN;
        
        for (int i = 1; i <= n; i++) {
            if (time[i] == INT_MAX) return -1; 
            tmax = max(tmax, time[i]);
        }
        return tmax;
    }
};*/