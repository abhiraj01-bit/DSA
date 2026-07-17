/*class Solution {
public:
void count(int n,vector<int>&pair,vector<int>&potions,long long success){
    int j=potions.size();
    int mid=0;
    int l=0;
    int r=j-1;
    int index=j;
    while(l<=r){
        mid=l+(r-l)/2;
        if((long long)potions[mid]*n>=success){
            index=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    pair.push_back(j-index);
}
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>pair;
        for(int x=0;x<spells.size();x++){
            count(spells[x],pair,potions,success);
        }
        return pair;
    }
};*/