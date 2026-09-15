class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // TC O(n)
        // SC O(1)
        double res = INT_MIN;
        double sum = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();
        while(r<n){
            sum+=nums[r];
            if(r-l+1==k){
                if(sum/k>res)res=sum/k;
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return res;
        
    }
};