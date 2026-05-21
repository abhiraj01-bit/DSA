/*
gfg
class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        unordered_map<int,int>mp;
        vector<int>a;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto e:mp){
            pq.push({e.second,e.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            a.push_back(pq.top().second);
            pq.pop();
        }
        reverse(a.begin(),a.end());
        return a;
        
    }
};
*/