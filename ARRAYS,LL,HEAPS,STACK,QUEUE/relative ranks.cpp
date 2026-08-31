/*class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>q;
        for(int i=0;i<score.size();i++){
            q.push(score[i]);
        }
        unordered_map<int,string>mp;
        int i=1;
        while(!q.empty()){
            if(i<=3){
                if(i==1){
                int n=q.top();
                q.pop();
                mp[n]="Gold Medal";
            }
            if(i==2){
                int n=q.top();
                q.pop();
                mp[n]="Silver Medal";
            }
            if(i==3){
                int n=q.top();
                q.pop();
                mp[n]="Bronze Medal";
            }
            }
            else{
                int n=q.top();
                q.pop();
                string s=to_string(i);
                mp[n]=s;
            }
            i++;
        }
        vector<string>ans;
        for(int i=0;i<score.size();i++){
            if(mp.find(score[i])!=mp.end()){
                ans.push_back(mp[score[i]]);
            }
        }
        return ans;
    }
};*/