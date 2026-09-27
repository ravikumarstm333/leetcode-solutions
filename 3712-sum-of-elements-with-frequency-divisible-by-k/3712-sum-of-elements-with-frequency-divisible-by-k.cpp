class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums)mp[i]++;
        int res=0;
        for(auto i:mp){
            if(i.second%k==0)res+=i.first*i.second;
        }
        return res;
        
    }
};