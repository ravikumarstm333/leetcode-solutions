class Solution {
public:
void gernetP(int open, int close ,int n,string sub, vector<string>&res){
    if(open>n || close > n) return;
    if(open==n && close==n){
        res.push_back(sub);
        return;
    }
    if(open<=close){
        gernetP(open+1,close,n,sub+'(',res);
    }else{
        gernetP(open,close+1,n,sub+')',res);
        gernetP(open+1,close,n,sub+'(',res);

    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gernetP(0,0,n,"",res);
        return res;
    }
};