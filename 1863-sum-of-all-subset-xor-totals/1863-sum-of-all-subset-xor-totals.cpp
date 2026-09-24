class Solution {
public:
    int helper(vector<int> &nums,int in,int curreXor){
        if(in==nums.size())return curreXor;
        int notChose = helper(nums,in+1,curreXor);
        int chose = helper(nums,in+1,curreXor^nums[in]);
        return notChose + chose;
    }
    int subsetXORSum(vector<int>& nums) {
        return helper(nums,0,0);
    }
};