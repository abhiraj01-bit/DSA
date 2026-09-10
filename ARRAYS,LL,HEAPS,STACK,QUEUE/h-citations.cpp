/*class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int count=0;
        int h=0;
        for(int i=0;i<citations.size();i++){
           count++;
            if(citations[i]>=count){
                h=count;
            }
            else{
                break;
            }
        }
        return h;
    }
};*/