/*
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
    int n=arr.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    }
    Key Ideas
Two-pointer technique:

j scans the array.

i marks the boundary of the "non-zero zone".

Every non-zero gets placed at the earliest available slot.

Zeros are left behind and eventually end up at the back.
};*/