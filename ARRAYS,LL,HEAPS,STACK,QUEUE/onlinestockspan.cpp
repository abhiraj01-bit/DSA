/*gfg 
class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<pair<int,int>>s;
        vector<int>sp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int span=1;
            while(!s.empty()&&s.top().first<=arr[i]){
                span+=s.top().second;
                s.pop();
            }
            s.push({arr[i],span});
            sp.push_back(span);
        }
        return sp;
    }
};*/