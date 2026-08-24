class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        string s="";
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
               s= haystack.substr(i,n);
               if(s==needle)return i;
            }
        }
        return -1;
    }
};