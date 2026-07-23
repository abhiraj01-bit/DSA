/*gfg
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int maxcount=0;
        int count=0;
        int maxcountz=0;
        int countz=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count++;
                maxcount=max(count,maxcount);
            }
            else{
                count=0;
            }
           if(arr[i]==0){
                countz++;
                maxcountz=max(countz,maxcountz);
            }
            else{
                countz=0;
            }
        }
        return max(maxcount,maxcountz);
    }
};*/