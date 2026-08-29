class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1){
            if(set.count(n)) return false;
            set.insert(n);
            int res=0;
            while(n>0){
                res+=pow(n%10,2);
                n/=10;
            }
            n=res;
        }
        return true;
    }
};