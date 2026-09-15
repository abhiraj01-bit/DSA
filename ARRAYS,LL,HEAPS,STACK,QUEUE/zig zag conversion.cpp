/*class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size())
            return s;
        bool flag = true;
        int row = 0;
        int n = s.size();
        unordered_map<int,string> mp;
        for(int i = 0; i < n; i++) {
            mp[row].push_back(s[i]);
            if(flag) {
                row++;

                if(row == numRows - 1)
                    flag = false;
            }
            else {
                row--;

                if(row == 0)
                    flag = true;
            }
        }
        string s1;
        for(int i = 0; i < numRows; i++) {
            s1 += mp[i];
        }
        return s1;
    }
};*/