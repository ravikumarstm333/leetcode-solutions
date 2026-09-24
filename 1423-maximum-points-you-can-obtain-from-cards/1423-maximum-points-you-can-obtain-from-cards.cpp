class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int ans=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        ans=sum;
        for(int i=n-1;i>=n-k;i--){
            sum-=cardPoints[i-(n-k)];
            sum+=cardPoints[i];
            if(sum>ans){
                ans=sum;
            }
        }
        return ans;
        
    }
};