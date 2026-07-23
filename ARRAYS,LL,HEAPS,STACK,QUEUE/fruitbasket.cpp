/*class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
     unordered_map<int,int>mp;
     int i=0;
     int count=0;
     for(int j=0;j<arr.size();j++){
         mp[arr[j]]++;
         if(mp.size()>2){
             mp[arr[i]]--;
             if(mp[arr[i]]==0){
                 mp.erase(arr[i]);
             }
             i++;
         }
         count=max(count,j-i+1);
     }
     return count;
    }
};*/