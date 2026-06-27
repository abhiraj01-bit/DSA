/*⚡ Key Ideas
You’re iterating backwards through the array.

Using a stack to keep track of future temperatures.

For each day:

Pop from stack until you find a warmer temperature.

If none found → push 0.

Else → push the number of days waited.

Reverse the result at the end.
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        vector<int>ans;
        int n=temperatures.size();
        for(int j=n-1;j>=0;j--){
            while(!s.empty()&&temperatures[j]>=temperatures[s.top()]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(s.top()-j);
            }
            s.push(j);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};*/