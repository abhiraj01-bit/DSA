/*class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n=costs.size();
        priority_queue<int,vector<int>,greater<int>>pq1,pq2;
        int l=0;
        int r=n-1;
        for(int i=0;i<candidates&&l<=r;i++){
            pq1.push(costs[l]);
            l++;
        }
        for(int i=0;i<candidates&&l<=r;i++){
            pq2.push(costs[r]);
            r--;
        }
        long long total=0;
        for(int i=0;i<k;i++){
            if(pq1.empty()){
                total+=pq2.top();
                pq2.pop();
                if(l<=r){pq2.push(costs[r--]);}
                
            }
            else if(pq2.empty()){
                total+=pq1.top();
                pq1.pop();
                if(l<=r){pq1.push(costs[l++]);}
            }
            else{
                int x=pq1.top();
                int y=pq2.top();
                if(x<=y){
                    total+=x;
                    pq1.pop();
                    if(l<=r){pq1.push(costs[l++]);}
                }
                else{
                    total+=y;
                    pq2.pop();
                    if(l<=r){pq2.push(costs[r--]);}
                }
            }
        }
        return total;
    }
};*/