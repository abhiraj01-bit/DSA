/*class Solution {
public:
    int maxVowels(string s, int k) {
        int ccount=0;
        int count=0;
        int w=0;
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                ccount++;
            }
            w++;
            while(w>=k){
                count=max(count,ccount);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    ccount--;
                    i++;
                    w--;
                }
                else{
                    i++;
                    w--;
                }
            }
        }
        return count;
    }
};*/