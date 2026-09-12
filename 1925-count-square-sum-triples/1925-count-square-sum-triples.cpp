class Solution {
public:
    int countTriples(int n) {
        // TC O(n^3)
        // SC O(1)
        int res=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=n;k++){
                    if(i*i+j*j==k*k)res++;
                }
            }
        }
        return res;
    }
};