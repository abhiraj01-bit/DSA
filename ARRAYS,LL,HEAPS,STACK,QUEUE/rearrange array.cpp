/*class Solution {
public:
    void solve(map<int,int>& mp, vector<int>& ans) {

        for(auto it = mp.begin(); it != mp.end(); ) {

            int u = it->first;

            ans.push_back(u);

            it->second--;

            if(it->second == 0) {
                it = mp.erase(it);
            }
            else {
                ++it;
            }
        }
    }

    vector<int> rearrangeArray(vector<int>& nums) {

        map<int,int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        vector<int> ans;

        while(!mp.empty()) {
            solve(mp, ans);
        }

        return ans;
    }
};*/