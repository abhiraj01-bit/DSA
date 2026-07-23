/*class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        int cost=0;
        while(pq.size()>1){
            int n=pq.top();
            pq.pop();
            int m=pq.top();
            pq.pop();
            int sum=n+m;
            cost+=sum;
            pq.push(sum);
        }
        return cost;
    }
};*/