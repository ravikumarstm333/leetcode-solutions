class Solution {
public:
    void mergeNums(vector<pair<int,int>> &nums,int l,int m,int r,vector<int> &res){
        int i=l;
        int j=m+1;
        vector<pair<int,int>> t;
        while(i<=m && j<=r){
            if(nums[i].first>nums[j].first){
                t.push_back(nums[j]);
                j++;
            }else{
                t.push_back(nums[i]);
                res[nums[i].second] += (j - (m + 1));
                i++;
                
            }
        }
        while(i<=m){
            t.push_back(nums[i]);
            res[nums[i].second] += (j - (m + 1));
            i++;
        }
        while(j<=r){
            t.push_back(nums[j]);
            j++;
        }
        for(int k=0;k<t.size();k++){
            nums[l+k]=t[k];
        }
    }
    void mergeSort(vector<pair<int,int>>& nums,int l,int r,vector<int> &res){
        if(l>=r) return;
        int mid=(r-l)/2+l;
        mergeSort(nums,l,mid,res);
        mergeSort(nums,mid+1,r,res);
        mergeNums(nums,l,mid,r,res);
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        vector<pair<int,int>> dummyNums;
        for(int i=0;i<nums.size();i++){
            dummyNums.push_back({nums[i],i});
        }
        mergeSort(dummyNums,0,nums.size()-1,res);
        return res;
    }
};