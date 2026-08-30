class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ind=0;
        vector<int> res(nums.begin(),nums.end());
        for(int i=0;i<res.size();i++){
            if(res[i]%2==0){
                swap(res[ind],res[i]);
                ind++;
            }
        }
        return res;
    }
};