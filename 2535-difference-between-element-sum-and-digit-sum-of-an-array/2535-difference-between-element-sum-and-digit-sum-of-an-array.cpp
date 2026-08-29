class Solution {
public:
    int getDigitSum(int num){
        int res=0;
        while(num!=0){
            res+=num%10;
            num/=10;
        }
        return res;
    }
    int differenceOfSum(vector<int>& nums) {
        int sumOfNums=0;
        int sumOfDigit=0;
        for(int i=0;i<nums.size();i++){
            sumOfNums+=nums[i];
            sumOfDigit+=getDigitSum(nums[i]);
        }
        return sumOfNums-sumOfDigit;
        
    }
};