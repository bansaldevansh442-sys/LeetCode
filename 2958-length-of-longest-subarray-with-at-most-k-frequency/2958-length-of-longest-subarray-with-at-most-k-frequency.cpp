class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    int r=0;
    int l=0;
    int maxlen=0;
    unordered_map<int,int>mp;
    int n=nums.size();
    while(r<n){
        mp[nums[r]]++;
       while(mp[nums[r]]>k){
        mp[nums[l]]--;
        l++;
       }
       maxlen=max(maxlen,r-l+1);
       r++;
    }
    return maxlen;
    }
};