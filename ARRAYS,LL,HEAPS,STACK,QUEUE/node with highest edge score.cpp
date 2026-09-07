/*class Solution {
public:
struct Compare {
    bool operator()(const pair<long long, int> &a, const pair<long long, int> &b) const {
        if (a.first != b.first)
            return a.first < b.first; 
        return a.second > b.second;   
    }
};
    int edgeScore(vector<int>& edges) {
        unordered_map<int,long long>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i]]+=i;
        }
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, Compare> pq;
        for(auto &e:mp){
            pq.push({e.second,e.first});
        }
        return pq.top().second;
    }
};*/