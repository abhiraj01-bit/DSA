/*leetcode
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int sum=0;
        int rem;
        int p=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(k==0){
                rem=sum;
            }
            else{
                rem=(sum%k+k)%k;
            }
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            
                mp[rem]++;;
           
        }
        return p+count;
    }
};*/