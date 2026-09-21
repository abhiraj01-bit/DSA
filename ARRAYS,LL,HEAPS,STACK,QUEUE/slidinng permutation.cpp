/*class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        unordered_map<char, int> mp;
        unordered_map<char, int> window;

        for(char c : s1) {
            mp[c]++;
        }

        int j = 0;

        for(int i = 0; i < s2.size(); i++) {

            window[s2[i]]++;

            if(i - j + 1 == s1.size()) {

                if(mp == window) {
                    return true;
                }

                window[s2[j]]--;

                if(window[s2[j]] == 0) {
                    window.erase(s2[j]);
                }

                j++;
            }
        }

        return false;
    }
};*/