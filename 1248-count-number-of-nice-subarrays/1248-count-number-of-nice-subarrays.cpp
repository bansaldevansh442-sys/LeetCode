class Solution {
public:
int sumofsubarray(vector<int>& nums,int k){
    int l=0;
    int r=0;
    int cnt=0;
    int sum=0;
    while(r<nums.size()){
        if(sum<=k){
            sum+=nums[r]%2;
        }
        while(sum>k){
            sum-=nums[l]%2;
            l++;
        }
        cnt+=(r-l+1);
        r++;
    }
    return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       return  sumofsubarray(nums,k)-sumofsubarray(nums,k-1);
    }
};