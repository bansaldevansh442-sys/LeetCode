class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(256,0);
        for (auto ch:t)
         freq[ch]++;
        int l=0;
        int r=0;
        int cnt=0;
        int sindex=-1;
        int minlen=INT_MAX;
        while(r<s.size()){
            if(freq[s[r]]>0)
                cnt++;
            freq[s[r]]--;
            while(cnt==t.size()){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sindex=l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0)
                 cnt--;
                l++;
            }
            r++;
        }
        return sindex==-1?"":s.substr(sindex,minlen);
    }
};