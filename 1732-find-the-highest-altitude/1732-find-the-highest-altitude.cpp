class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int Alt=0;
        int res=0;
        for(int i=0;i<gain.size();i++){
            Alt+=gain[i];
            if(res<Alt)res=Alt;
        }
        return res;
        
    }
};