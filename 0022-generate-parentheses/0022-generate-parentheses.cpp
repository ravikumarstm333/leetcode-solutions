class Solution {
public:
    void gernet(int n,int open,int close,string s,vector<string> &res){
        if(n==open && open==close){
            res.push_back(s);
            return;
        }
        if(open<=close && open<n){
            gernet(n,open+1,close,s+'(',res);
        }else{
            if(open<n)gernet(n,open+1,close,s+'(',res);
            if(close<n) gernet(n,open,close+1,s+')',res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gernet(n,0,0,"",res);
        return res;
    }
};