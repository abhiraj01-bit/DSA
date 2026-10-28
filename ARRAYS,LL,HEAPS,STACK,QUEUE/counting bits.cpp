/*class Solution {
public:
    vector<int> countBits(int n) {
     vector<int>ans;
     for(int p=0;p<=n;p++){
        int i=p;
        int count=0;
        while(i>0){
            int j=i%2;
            if(j==1){
                count++;
            }
            i/=2;
        }
        ans.push_back(count);
     }   
     return ans;
    }
};*/