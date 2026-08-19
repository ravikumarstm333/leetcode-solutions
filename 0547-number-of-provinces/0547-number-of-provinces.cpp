class Solution {
public:
    void helper(int i, vector<bool>& visit, vector<vector<int>>& isConnected) {
        visit[i] = true;

        for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[i][j] == 1 && !visit[j]) {
                helper(j, visit, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool> visit(n);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                helper(i,visit,isConnected);
                count++;
            }
        }
        return count;
    }
};