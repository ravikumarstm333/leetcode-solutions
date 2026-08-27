class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                mp[nums[i]]=1;
                if(nums[i]>max)max=nums[i];
            }
        }
        for(int i=k;i<max;i+=k){
            if(!mp.contains(i))return i;
        }
        return max+k;
    }
};