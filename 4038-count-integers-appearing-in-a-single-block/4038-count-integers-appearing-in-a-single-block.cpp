class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cur=nums[0];
        int curAc=1;
        for(int i=1;i<nums.size();i++){
            if(cur!=nums[i]){
                if(curAc==mp[cur])res++;
                curAc=1;
                cur=nums[i];
            }else curAc++;
        }
        if(curAc==mp[cur]) res++;
        return res;
        
    }
};