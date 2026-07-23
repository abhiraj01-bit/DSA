/*gfg 
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        sort(arr.begin(),arr.end());
        int i,j;
        int n=arr.size();
        int count=0;
        i=0;
        j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==target){
                if(arr[i]==arr[j]){
                    int length=j-i+1;
                    count+=(length*(length-1))/2;
                    return count;
                }
                int leftcount=1;
                int rightcount=1;
                while(i+1<j&&arr[i]==arr[i+1]){
                    leftcount++;
                    i++;
                }
                while(j-1>i&&arr[j]==arr[j-1]){
                    rightcount++;
                    j--;
                }
                count+=leftcount*rightcount;
                i++;
                j--;
            }
                else if(arr[i]+arr[j]>target){
                    j--;
                }
                else{
                    i++;
                }
        }
        return count;
    }
};*/