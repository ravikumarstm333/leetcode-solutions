class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // TC O(n)
        // SC O(n)
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(!mp.contains(nums[i])){
                mp[nums[i]]=i;
            }else if(abs(mp[nums[i]]-i)<=k){
                return true;
            }else{
                mp[nums[i]]=i;
            }
        }
        return false;
    }
};