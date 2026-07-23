/*gfg
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int count;
        int maxi=0;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                count=i-mp[sum];
                maxi=max(count,maxi);
            }
            else{
                mp[sum]=i;
            }
        }
        return maxi;
    }
};*/