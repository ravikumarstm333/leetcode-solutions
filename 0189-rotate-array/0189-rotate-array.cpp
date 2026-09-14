class Solution {
public:
    void reverse(vector<int> &v,int i,int j){
        for(int k=i;k<j/2;k++){
            swap(v[k],v[j-1-k]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int R = k % n;
        reverse(nums,0,n-R);
        reverse(nums,0,n);
        reverse(nums,0,R);
















        
    }
};