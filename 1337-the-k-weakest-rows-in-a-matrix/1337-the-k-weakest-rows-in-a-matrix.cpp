class Solution {
public:
    int getOnes(vector<int> v){
        int count=0;
        for(int i:v){
            if(i==1) count++;
        }
        return count;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        for(int i=0;i<mat.size();i++){
            res.push_back(getOnes(mat[i]));
        }
        multiset<pair<int,int>>mp;
        for(int i=0;i<res.size();i++){
            mp.insert({res[i],i});
        }
        vector<int> finalres;
        int in=0;
        for(auto it:mp){
            if(in==k) break;
            in++;
            finalres.push_back(it.second);

        }
        return finalres;
        
    }
};