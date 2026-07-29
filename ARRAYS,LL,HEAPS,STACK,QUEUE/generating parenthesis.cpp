/*class Solution {
public:
bool isvalid(string &curr){
    int count=0;
    for(char c:curr){
        if(c=='('){
            count++;
        }
        else{
            count--;
        }
        if(count<0){
            return false;
            break;
        }
    }
    return count==0;
}
void solve(int n,vector<string>&result,string &curr){
    if(curr.size()==2*n){
        if(isvalid(curr)){
            result.push_back(curr);
        }
        return;
    }
    curr.push_back('(');
    solve(n,result,curr);
    curr.pop_back();
    curr.push_back(')');
    solve(n,result,curr);
    curr.pop_back();
}
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string curr="";
        solve(n,result,curr);
        return result;
    }
};*/