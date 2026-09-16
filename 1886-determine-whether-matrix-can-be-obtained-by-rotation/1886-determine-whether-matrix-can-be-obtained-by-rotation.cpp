class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        vector<vector<int>> rot=mat;
        for(int it=0;it<4;it++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i<j) swap(rot[i][j],rot[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n/2;j++){
                    swap(rot[i][j],rot[i][n-1-j]);
                }
            }
            int a=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(rot[i][j]!=target[i][j])a=1;
                }
            }
            if(a==0)return true;
        }
        return false;
    }
};