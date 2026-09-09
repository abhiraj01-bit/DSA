/*class Solution {
public:
void solve(int i,unordered_map<char,string>&mp,vector<string>&s,string &temp,string &digits){
    if(i==digits.size()){
        s.push_back(temp);
        return;
    }
    char ch=digits[i];
    string t=mp[ch];
    for(int j=0;j<t.size();j++){
        temp.push_back(t[j]);
        solve(i+1,mp,s,temp,digits);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string>s;
        string temp="";
        solve(0,mp,s,temp,digits);
        return s;
    }
};*/