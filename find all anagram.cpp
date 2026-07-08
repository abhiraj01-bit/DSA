/*class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size()){
            return ans;
        }
        unordered_map<char,int>h1,h2;
        for(char c:p){
            h2[c]++;
        }
        int n=p.size();
        for(int i=0;i<n;i++){
            h1[s[i]]++;
        }
        if(h1==h2){
            ans.push_back(0);
        }
        for(int i=n;i<s.size();i++){
            h1[s[i-n]]--;
            if(h1[s[i-n]]==0){
                h1.erase(s[i-n]);
            }
            h1[s[i]]++;
            if(h1==h2){
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};*/