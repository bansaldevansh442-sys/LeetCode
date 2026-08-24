class Solution {
public:
 bool checkpalindrome(string &s,int l,int r){
    if(l>=r)
    return true;
    if(s[l]!=s[r])return false;
    return checkpalindrome(s,l+1,r-1);
 }
    bool isPalindrome(string s) {
        string temp = "";
        for(char c : s) {
            if(isalnum(c))
                temp += tolower(c);
        }
       return    checkpalindrome(temp,0,temp.size()-1);
    }
};