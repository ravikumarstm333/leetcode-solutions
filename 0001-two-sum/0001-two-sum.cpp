class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
          if(mp.contains(target-nums[i])){
            res.push_back(i);
            res.push_back(mp[target-nums[i]]);
            break;
          }else mp[nums[i]]=i;
        }
        return res;
        
    }
};