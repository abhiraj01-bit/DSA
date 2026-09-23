/*class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>adj(n);
        for(int i=0;i<manager.size();i++){
            if(manager[i]==-1){
                continue;
            }
            adj[manager[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        q.push({headID,informTime[headID]});
        int time=INT_MIN;
        while(!q.empty()){
            int u=q.front().first;
            int t=q.front().second;
            q.pop();
            time=max(time,t);
            for(int e:adj[u]){
                q.push({e,t+informTime[e]});
            }
        }
        return time;
    }
};*/