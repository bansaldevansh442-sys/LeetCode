class Solution {
public:
int subarraysWithlessthanequalKDistinct(vector<int>& nums, int k){
    int l=0;
    int r=0;
    int cnt=0;
    unordered_map<int,int>mp;
    while(r<nums.size()){
        mp[nums[r]]++;
        while(mp.size()>k){
            mp[nums[l]]--;
            if(mp[nums[l]]==0){        //  Imortant line
                mp.erase(nums[l]);     //  Imortant line
            }
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return  subarraysWithlessthanequalKDistinct(nums,k)-subarraysWithlessthanequalKDistinct(nums,k-1);
    }
};