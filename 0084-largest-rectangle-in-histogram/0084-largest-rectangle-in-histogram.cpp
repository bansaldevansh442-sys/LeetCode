class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int pse=0;
        int nse=0;
        int element=0;
        int maxarea=0;
    for(int i=0;i<heights.size();i++){
        while(!st.empty()&& heights[st.top()]>heights[i]){
            element=st.top();
            st.pop();
            nse=i;
            pse=st.empty()?-1:st.top();
            maxarea=max(maxarea,heights[element]*(nse-pse-1));
        }
        st.push(i);
    }
        while(!st.empty()){
            nse=heights.size();
            element=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();
            maxarea=max(maxarea,heights[element]*(nse-pse-1));
        }
        return maxarea;
    }
};