class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        // TC O(n^3)
        // SC O(1)
        int res=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]!=nums[j] && nums[j]!=nums[k] && nums[i]!=nums[k])res++;
                }
            }
        }
        return res;
    }
};