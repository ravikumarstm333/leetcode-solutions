class Solution {
public:
    bool chelFirstAndLast(long long num,int x){
        // if(num==x) return true;
        // if(x!=num%10)return false;
        // while(num>0){
        //     int d=num%10;
        //     num/=10;
        //     if(num==x){
        //         return true;
        //     }
        // }
        // return false;
        int last=num%10;
        int first=num/pow(10,(int)log10(num));
        if(x==last && first==x) return true;
        return false;


    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(chelFirstAndLast(sum,x)){
                    res++;
                }
            }
        }
        return res;
    }
};