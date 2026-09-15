class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // TC O(2n)= O(n)
        // SC O(1)
        int n=nums.size();
        int sum=0;
        int res=n+1;
        int l=0;
        int r=0;
        while(l<n){
            if(sum>=target){
                res=min(r-l,res);
                if(res==1) return 1;
                sum-=nums[l];
                l++;
                continue;
                
            }
            if(r<n){
                sum+=nums[r];
            }
            else if(sum<target){
                if(res==n+1) return 0;
                return res;
            }
            r++;
        }
        if(res==n+1) return 0;
        return res;
    }
};