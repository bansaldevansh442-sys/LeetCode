class Solution {
public:
    int maximumLengthSubstring(string s) {
        int r=0;
        int l=0;
        int n=s.size();
        int maxlen=0;
        unordered_map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};