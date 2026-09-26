/*class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto e : mp) {
            pq.push({e.second, e.first});
        }
        string s1;
        if(pq.top().first > (s.size() + 1) / 2) {
            return "";
        }
        int prevCount = 0;
        char prevChar = '#';
        while(!pq.empty()) {
            int u = pq.top().first;
            char v = pq.top().second;
            pq.pop();
            s1.push_back(v);
            u--;
            if(prevCount > 0) {
                pq.push({prevCount, prevChar});
            }
            prevCount = u;
            prevChar = v;
        }
        return s1;
    }
};*/