class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxE=nums[0];
        for(int i=0;i<nums.size();i++){
            maxE=max(maxE,nums[i]);
            int minE=nums[i];
            for(int j=i;j<nums.size();j++){
                minE=min(minE,nums[j]);
            }
            if((maxE-minE)<=k){
                return i;
            }
        }
        return -1;
    }
};