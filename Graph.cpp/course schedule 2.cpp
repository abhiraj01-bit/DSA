/*class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int> ind(numCourses, 0);
        vector<int>ans;
        queue<int>q;
        for(auto &i:prerequisites){
            int u=i[0];
            int v=i[1];
            adj[v].push_back(u);
            ind[u]++;
        }
            for(int i=0;i<ind.size();i++){
                if(ind[i]==0){
                    q.push(i);
                }
            }
            while(!q.empty()){
                int u=q.front();
                q.pop();
                ans.push_back(u);
                for(int n:adj[u]){
                    ind[n]--;
                    if(ind[n]==0){
                        q.push(n);
                    }
                }
            }
        if(ans.size()!=numCourses){
            return {};
        }
        return ans;
    }
};*/