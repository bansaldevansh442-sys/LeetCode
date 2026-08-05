class Solution {
public:
void dfs(vector<vector<int>>&ans,vector<vector<int>>& image,int inicolour, int row, int col, int color){
    ans[row][col]=color;
     int n=image.size();
     int m=image[0].size();
     vector<int>delcol={-1,0,1,0};
     vector<int>delrow={0,1,0,-1};
     for(int i=0;i<4;i++){
        int nrow=delrow[i]+row;
        int ncol=delcol[i]+col;
        if(nrow>=0 &&nrow< n &&ncol>=0 &&ncol<m && image[nrow][ncol]==inicolour &&ans[nrow][ncol]!=color )
        dfs(ans,image,inicolour,nrow,ncol,color);
     }

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolour=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>ans=image;
        dfs(ans,image,inicolour,sr,sc,color);
        return ans;
    }
};