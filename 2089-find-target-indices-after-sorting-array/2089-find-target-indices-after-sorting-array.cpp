class Solution {
public:
    void MergeArray(vector<int>&arr,int l,int m,int r){
        int i=l;
        int j=m+1;
        vector<int> v;
        while(i<=m && j<=r){
            if(arr[i]<=arr[j]){
                v.push_back(arr[i]);
                i++;
            }else{
                v.push_back(arr[j]);
                j++;
            }
        }
        while(i<=m){
            v.push_back(arr[i]);
            i++;
        }
        while(j<=r){
            v.push_back(arr[j]);
            j++;
        }
        for(int k=0;k<v.size();k++){
            arr[k+l]=v[k];
        }
    }
    void MergeSort(vector<int> &nums,int l,int r){
        if(l>=r)return;
        int m=(r-l)/2+l;
        MergeSort(nums,l,m);
        MergeSort(nums,m+1,r);
        MergeArray(nums,l,m,r);
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        MergeSort(nums,0,nums.size()-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                res.push_back(i);
            }else if(res.size()>0){
                break;
            }
        }
        return res;
    }
};