/*leetcode
class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
       int base,area;
       int minlength;
       int maxarea=0;
       int i=0;
       int j=n-1;
        while(i<j){
            base=j-i;
            minlength=min(height[i],height[j]);
            area=minlength*base;
            maxarea=max(area,maxarea);
            if(minlength==height[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};*/