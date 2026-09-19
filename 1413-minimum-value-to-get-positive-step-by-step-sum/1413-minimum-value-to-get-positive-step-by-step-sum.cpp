class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int res=1;
        while(true){
            int sum=res;
            int a=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                if(sum<1){
                    a=1;
                    break;
                }
            }
            if(a==0){
                break;
            }
            res++;
        }
        return res;
        
    }
};