class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result={prices.begin(),prices.end()};
        for(int i=0;i<result.size()-1;i++){
            for(int j=i+1;j<result.size();j++){
                if(result[j]<=result[i]){
                    result[i]-=result[j];
                    break;
                }
            }
        }
        return result;
    }
};