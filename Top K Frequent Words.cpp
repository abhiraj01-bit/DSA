/*class cmp {
public:
    bool operator()(pair<int, string>& a, pair<int, string>& b) {
        if (a.first == b.first)
            return a.second < b.second;   
        return a.first > b.first;       
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;
        vector<string> arr;

        for (auto &word : words)
            mp[word]++;

        priority_queue<pair<int, string>,
                       vector<pair<int, string>>,
                       cmp> pq;

        for (auto &a : mp) {
            pq.push({a.second, a.first});

            if (pq.size() > k)
                pq.pop();
        }

        while (!pq.empty()) {
            arr.push_back(pq.top().second);
            pq.pop();
        }

        reverse(arr.begin(), arr.end());

        return arr;
    }
};*/