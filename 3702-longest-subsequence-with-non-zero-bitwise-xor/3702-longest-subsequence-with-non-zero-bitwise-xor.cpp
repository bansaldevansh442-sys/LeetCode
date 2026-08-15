class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalxor=0;
        for(int i:nums){
            totalxor=totalxor^i;
        }
        if(totalxor!=0)return nums.size();
        for(int i:nums){
            if(i!=0)return nums.size()-1;
        }
        return 0;
    }
};