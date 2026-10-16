/*class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
     int n=fruits.size();
     vector<int>vis(n,-1);
     for(int i=0;i<fruits.size();i++){
        for(int j=0;j<fruits.size();j++){
            if(fruits[i]<=baskets[j]&&vis[j]==-1){
                vis[j]=0;
                break;
            }
        }
     }
     int count=0;
     for(int i=0;i<n;i++){
        if(vis[i]==-1){
            count++;
        }
     }
     return count;
    }
};*/