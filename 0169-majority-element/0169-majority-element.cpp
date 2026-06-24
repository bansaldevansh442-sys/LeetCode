class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums[0];
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(n==nums[i]){
                cnt++;
            }
            else 
             cnt--;
            if(cnt==0)
             n=nums[i+1];
        }
        return n;
    }
    
};