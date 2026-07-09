class Solution {
public:
vector<int>nse(vector<int>& nums){
    vector<int>ans(nums.size());
    stack <int>st;
    for(int i=nums.size()-1;i>=0;i--){
        while(!st.empty()&& nums[st.top()]>nums[i])
         st.pop();
        ans[i]=st.empty()?nums.size():st.top();
        st.push(i);
    }
    return ans;
}
vector<int>pse(vector<int>& nums){
    vector<int>ans(nums.size());
    stack<int>st;
    for(int i=0;i<nums.size();i++){
        while(!st.empty() && nums[st.top()]>=nums[i])
         st.pop();
        ans[i]=st.empty()?-1:st.top();    
        st.push(i);
    }
    return ans;
}
vector<int>nge(vector<int>& nums){
    vector<int>ans(nums.size());
    stack<int>st;
    for(int i=nums.size()-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]<nums[i])
         st.pop();
        ans[i]=st.empty()?nums.size():st.top();
        st.push(i);
    }
    return ans;
}
vector<int>pge(vector<int>& nums){
    vector<int>ans(nums.size());
    stack<int>st;
    for(int i=0;i<nums.size();i++){
        while(!st.empty() && nums[st.top()]<=nums[i])
         st.pop();
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}
    long long subArrayRanges(vector<int>& nums) {
        long long totalmin=0;
        long long totalmax=0;
        vector<int>psee=pse(nums);
        vector<int>nsee=nse(nums);
        vector<int>pgee=pge(nums);
        vector<int>ngee=nge(nums);
        for(int i=0;i<nums.size();i++){
            int leftmin=i-psee[i];
            int rightmin=nsee[i]-i;
            int leftmax=i-pgee[i];
            int rightmax=ngee[i]-i;
            totalmin+=leftmin*rightmin*1LL*nums[i];
            totalmax+=leftmax*rightmax*1LL*nums[i];
        }
            return totalmax-totalmin;
    }
};