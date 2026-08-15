/*leetcode
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<int>st;
            int count=0;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int n=board[i][j]-'0';
                    if(n>=1&&n<=9){
                        count++;
                        st.insert(n);
                    }
                    else{
                        return false;
                    }
                }
            }
            if(st.size()!=count){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<int>st;
            int count=0;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    int n=board[j][i]-'0';
                    if(n>=1&&n<=9){
                        count++;
                        st.insert(n);
                    }
                    else{
                        return false;
                    }
                }
            }
            if(st.size()!=count){
                return false;
            }
        }
        for(int i=0;i<9;i+=3){
    for(int j=0;j<9;j+=3){

        unordered_set<int> st;
        int count=0;

        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){

                if(board[x][y]!='.'){

                    int n=board[x][y]-'0';

                    if(n>=1 && n<=9){
                        count++;
                        st.insert(n);
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        if(st.size()!=count){
            return false;
        }
    }
}
       return true;
    }
};*/