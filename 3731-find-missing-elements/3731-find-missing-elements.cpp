class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx=nums[nums.size()-1];
        int mn=nums[0];
        vector<int>ans;
        unordered_set<int>mp(nums.begin(),nums.end());
        for(int i=mn+1;i<=mx-1;i++)
        {
            if(!mp.count(i))ans.push_back(i);
         }
         return ans;
    }
};