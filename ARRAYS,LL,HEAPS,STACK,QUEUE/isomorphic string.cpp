/*class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        string s1,s2;
        for(int i=0;i<s.size();i++){
            if(mp1.find(s[i])!=mp1.end()){
                s1.push_back(mp1[s[i]]);
            }
            if(mp2.find(t[i])!=mp2.end()){
                s2.push_back(mp2[t[i]]);
            }
        }
        return s1==t&&s2==s;
    }
};*/