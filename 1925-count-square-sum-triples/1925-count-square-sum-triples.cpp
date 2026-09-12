class Solution {
public:
    int countTriples(int n) {
        // TC O(n^2)
        // SC O(1)
        int res=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int a=i*i+j*j;
                int c=sqrt(a);
                if(c<=n && c*c==a)res++;
            }
        }
        return res;
    }
};