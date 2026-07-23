/*leetcode
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> s;

        for(int i=0;i<asteroids.size();i++){

            int curr = asteroids[i];

            bool destroyed = false;

            while(!s.empty() && s.top() > 0 && curr < 0){
                if(s.top() == abs(curr)){

                    s.pop();

                    destroyed = true;

                    break;
                }

                // stack asteroid bigger
                else if(s.top() > abs(curr)){

                    destroyed = true;

                    break;
                }

                // current asteroid bigger
                else{

                    s.pop();
                }
            }

            if(!destroyed){

                s.push(curr);
            }
        }

        vector<int> ans;

        while(!s.empty()){

            ans.push_back(s.top());

            s.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};*/