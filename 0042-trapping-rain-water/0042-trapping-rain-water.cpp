class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=0;
        int res=0;
        int sum=0;
        int lastP=0;
        while(r<n){
            if(l==r){
                r++;
                continue;
            }else if(height[r]>=height[l]){
                lastP=r;
                res+=sum;
                sum=0;
                l=r;
                r++;
            }else{
                sum+=(height[l]-height[r]);
                r++;
            }
        }
        int endl=n-1;
        int endr=n-1;
        sum=0;
        while(endl>=lastP){
            if(endl==endr){
                endl--;
                continue;
            }else if(height[endl]>=height[endr]){
                res+=sum;
                sum=0;
                endr=endl;
                endl--;
            }
            else{
                sum+=(height[endr]-height[endl]);
                endl--;
            }

        }
        return res;
    }
};