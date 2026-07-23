/*class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string cleaned;
        for(char c:s){
            if(isalnum(c)){
                cleaned+=tolower(c);
            }
        }
        int n=cleaned.size();
        int j=n-1;
        for(int i=0;i<n/2;i++){
            if(cleaned[i]!=cleaned[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};*/