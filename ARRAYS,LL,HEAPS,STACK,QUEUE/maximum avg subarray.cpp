/*class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int i=0;
        double avrg=INT_MIN;
        int count=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            count++;
            while(count>=k){
                avrg=max(avrg,(double)sum / k);
                sum-=nums[i];
                i++;
                count--;
            }
        }
        return avrg;
    }
};*/