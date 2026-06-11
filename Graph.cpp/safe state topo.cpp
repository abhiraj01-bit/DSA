/*
class Solution {
  public:
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>graph(V);
       for(auto i : edges){
           int u=i[0];
           int v=i[1];
           graph[u].push_back(v);
       }

        vector<vector<int>> rev(V);
        vector<int> indegree(V, 0);

        // Reverse graph and calculate indegree
        for(int i = 0; i < V; i++) {
            for(int it : graph[i]) {
                rev[it].push_back(i);
                indegree[i]++;
            }
        }

        queue<int> q;

        // Add terminal nodes
        for(int i = 0; i <  V; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        vector<int> safe;

        // Kahn's BFS
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            safe.push_back(node);

            for(int it : rev[node]) {
                indegree[it]--;

                if(indegree[it] == 0)
                    q.push(it);
            }
        }

        sort(safe.begin(), safe.end());

        return safe;
       
    }
};*/