class Solution {
public:
    vector<int>nse(vector<int>& arr){
        stack<int>st;
        vector<int>ans(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i])
             st.pop();
            ans[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int>pse(vector<int>& arr){
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i])
             st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>st;
        long long total=0;
        int MOD = 1e9 + 7;
        vector<int>psee=pse(arr);
        vector<int>nsee=nse(arr);
        for(int i=0;i<arr.size();i++){
            int left=i-psee[i];
            int right=nsee[i]-i;
            total=(total+(left*right*1LL*arr[i])%MOD)%MOD;
        }
        return (int)total;
    }
};