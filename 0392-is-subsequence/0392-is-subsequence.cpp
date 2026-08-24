class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int i=0;
        int cnt=0;
        while(j<t.size()){
            if(s[i]==t[j]){
            i++;
            }
            j++;
        }
        return (i==s.size());
    }
};