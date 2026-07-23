/*class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto e:mp){
            pq.push({e.second,e.first});
        }
        string ans;
        while(!pq.empty()){
            ans.append(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};*/