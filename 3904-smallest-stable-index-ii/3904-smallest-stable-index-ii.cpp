class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // TC o(n) 
        // SC o(n)
        
        map<int,pair<int,int>> mp;
        int maxe=nums[0];
        int mine=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            maxe=max(maxe,nums[i]);
            mp[i].first=maxe;
        }
        for(int i=nums.size()-1;i>=0;i--){
            mine=min(mine,nums[i]);
            mp[i].second=mine;
        }
        for(int i=0;i<nums.size();i++){
            if((mp[i].first-mp[i].second)<=k)return i;
        }
        return -1;
        
    }
};