class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int water=0;
        while(l<r){
            leftmax=max(leftmax,height[l]);
            rightmax=max(rightmax,height[r]);
            
        if (leftmax < rightmax) {
            water += leftmax - height[l];
            l++;
        } else {
            water += rightmax - height[r];
            r--;
        }
        }
        return water;
    }
};