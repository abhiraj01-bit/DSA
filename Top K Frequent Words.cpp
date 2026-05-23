/*class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
         vector<string>arr;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        auto cmp=[](pair<int,string>&a,pair<int,string>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first<b.first;
        };
        priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(cmp)>pq(cmp);
        for(auto a:mp){
            pq.push({a.second,a.first});
        }
        for(int i=0;i<k;i++){
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
    }
};*/