/*class Solution {
  public:
  void subsec(string& s,int index,string curr,vector<string>&ans){
     if(index==s.size()){
        ans.push_back(curr);
         return ;
     }
     subsec(s,index+1,curr,ans);
     subsec(s,index+1,curr+s[index],ans);
  }
    vector<string> powerSet(string &s) {
        // Code here
        vector<string>ans;
        subsec(s,0,"",ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};*/