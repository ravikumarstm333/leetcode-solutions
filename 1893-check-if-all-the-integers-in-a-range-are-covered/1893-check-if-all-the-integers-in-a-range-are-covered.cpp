class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_map<int,bool> mp;
        for(int i=left;i<=right;i++){
            bool hai = false;
            for(vector<int> v:ranges){
                if(i>=v[0] && i<=v[1])hai=true;
            }
            if(!hai) return false;
        }
        return true;
        
    }
};