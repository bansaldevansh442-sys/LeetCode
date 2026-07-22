class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0;
        int l=0;
        int n=s.size();
        int len=0;
        int maxlen=0;
        unordered_map<int,int>mp;
        while(r<n){
            if(mp.find(s[r])!=mp.end()&&mp[s[r]]>=l)
             l=mp[s[r]]+1;
            mp[s[r]]=r;
            len=r-l+1;
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};