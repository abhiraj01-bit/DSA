/*leetcode
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        long long sum=0;
        long long cost=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            int n1=pq.top();
            pq.pop();
            int n2=pq.top();
            pq.pop();
            sum=n1+n2;
            cost+=sum;
            pq.push(sum);
        }
        return cost;
    }
};*/