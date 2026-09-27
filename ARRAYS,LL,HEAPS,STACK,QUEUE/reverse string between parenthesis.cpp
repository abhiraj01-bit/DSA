/*class Solution {
public:
    string reverseParentheses(string s) {

        stack<int> st;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                st.push(i);
            }

            else if(s[i] == ')') {

                int u = st.top();
                st.pop();

                reverse(s.begin() + u + 1, s.begin() + i);
                s.erase(s.begin() + i);
                s.erase(s.begin() + u);
                i -= 2;
            }
        }

        return s;
    }
};*/