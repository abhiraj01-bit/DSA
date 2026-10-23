/*#include <bits/stdc++.h>
using namespace std;
long long solve(int i,vector<int>&arr,vector<long long>&dp){
    if(i>=arr.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    long long inc= LLONG_MIN;
    if(i+1<arr.size()){
     inc=((1ll*arr[i]*(i+2))+(1ll*arr[i+1]*(i+1)))+solve(i+2,arr,dp);   
    }
    long long exc=(1ll*arr[i]*(i+1))+solve(i+1,arr,dp);
    dp[i]=max(inc,exc);
    return dp[i];
}
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    vector<int>arr(x);
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	        
	    }
	    vector<long long >dp(x,-1);
	    long long s=solve(0,arr,dp);
	    cout<<s<<endl;
	}
	return 0;
}
*/