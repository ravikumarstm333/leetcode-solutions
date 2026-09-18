class Solution {
public:
    int getFirst(vector<int> &arr,int target){
        int l = 0;
        int r = arr.size()-1;
        int res=-1;
        while(l<=r){
            int m=(r-l)/2+l;
            if(arr[m]==target){
                res=m;
                r=m-1;
            }else if(target>arr[m]){
                l=m+1;
            }else {
                r=m-1;
            }
        }
        return res;
    }
    int getLast(vector<int> &arr,int target){
        int l = 0;
        int r = arr.size()-1;
        int res=-1;
        while(l<=r){
            int m=(r-l)/2+l;
            if(arr[m]==target){
                res=m;
                l=m+1;
            }else if(target>arr[m]){
                l=m+1;
            }else {
                r=m-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {
            getFirst(nums,target),
            getLast(nums,target)
        };

    }
};