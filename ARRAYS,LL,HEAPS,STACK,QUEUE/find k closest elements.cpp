/*class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>mp;
        for(int i=0;i<arr.size();i++){
            int diff=abs(x-arr[i]);
            mp.push_back({arr[i],diff});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto &e:mp){
            pq.push({e.second,e.first});
        }
        vector<int>ans;
        while(k!=0){
            int u=pq.top().second;
            pq.pop();
            ans.push_back(u);
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};*/