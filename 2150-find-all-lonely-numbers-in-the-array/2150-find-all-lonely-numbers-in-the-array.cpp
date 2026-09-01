class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        if(nums.size()==1) return nums;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1 && !mp.contains(nums[i]+1) && !mp.contains(nums[i]-1)) res.push_back(nums[i]);
        }
        return res;
    }
};