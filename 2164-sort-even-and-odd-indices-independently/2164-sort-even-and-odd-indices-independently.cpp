class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> res(nums.begin(),nums.end());
        for(int i=0;i<res.size();i++){
            int number=i;
            for(int j=i;j<res.size();j++){
                if(j%2==0 && number%2==0 &&  res[j]<res[number]) number=j;
                else if(j%2!=0 && number%2!=0 && res[j]>res[number]) number=j;
            }
            swap(res[i],res[number]);
        }
        return res;
        
    }
};