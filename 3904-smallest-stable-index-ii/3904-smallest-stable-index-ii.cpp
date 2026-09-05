class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // TC o(n) 
        // SC o(n)
        vector<int> minInde(nums.size());
        int maxe=nums[0];
        int mine=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<mine)mine=nums[i];
            minInde[i]=mine;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxe)maxe=nums[i];
            if((maxe-minInde[i])<=k)return i;
        }
        return -1;
        
    }
};