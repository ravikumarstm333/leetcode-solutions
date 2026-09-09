class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i:nums)total+=i;
        int leftSum=0;
        for(int i=0;i<nums.size();i++){
            if(leftSum==(total-leftSum-nums[i])) return i;
            else leftSum+=nums[i];
        }
        return -1;
        
    }
};