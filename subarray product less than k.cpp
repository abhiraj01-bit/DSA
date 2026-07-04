/*class Solution {
  public:
    int countSubarray(vector<int>& arr, int k) {
        // code here
        if (k <= 1) return 0;
        int count=0;
        int product=1;
        int i=0;
        for(int j=0;j<arr.size();j++){
            product*=arr[j];
            while(product>=k){
                product/=arr[i];
                i++;
            }
            count+=j-i+1;
        }
        return count;
    }
};*/