/*class Solution {
public:
struct Compare {
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const {
        if (a.first != b.first)
            return a.first > b.first; 
        return a.second < b.second;   
    }
};
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>pq;
        for(auto &e:mp){
            pq.push({e.second,e.first});
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.insert(ans.end(),pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};*/