class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {

        int res = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> first = grid[0];
        for(int i = 1;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]<=first[j]){
                    int t = first[j]+1;
                    res += first[j]+1-grid[i][j];
                    first[j]=t;
                }else{
                    first[j]=grid[i][j];
                }
            }
        }
        return res;
        
    }
};