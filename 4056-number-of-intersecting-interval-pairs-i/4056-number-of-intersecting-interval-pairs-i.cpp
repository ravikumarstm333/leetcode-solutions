class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int res=0;
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][0]>intervals[i][1])continue;
            for(int j=i+1;j<intervals.size();j++){
                int st=intervals[i][0]>=intervals[j][0]?intervals[i][0]:intervals[j][0];
                int end=intervals[i][1]<=intervals[j][1]?intervals[i][1]:intervals[j][1];
                if(st>end)continue;
                res++;
            }
        }
        return res;
        
    }
};