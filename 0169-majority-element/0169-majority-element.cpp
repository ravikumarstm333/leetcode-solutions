class Solution {
public:
    int majorityElement(vector<int>& nums) {

        ////// ******** Approach #1 **********
        ///// TC O(n^2)
        ////  SC O(1)
        // int mejority=-1;
        // for(int i=0;i<nums.size();i++){
        //     int count=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>nums.size()/2){
        //         mejority=nums[i];
        //         break;
        //     }
        // }
        // return mejority;


        ////// ******** Approach #2 **********

        //// TC O(n)
        ///// SC O(n)

        // int mejority=-1;
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second>nums.size()/2){
        //         mejority=it.first;
        //         break;
        //     }
        // }
        // return mejority;



        ////// ******** Approach #3 **********
        //// use algo more-votting

        int element=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                element=nums[i];
                count++;
            }else if(nums[i]==element)count++;
            else count--;
        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element)count++;
        }
        return count>nums.size()/2?element:-1;
    }
};