class Solution {
public:
    string removeStars(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='*' && res.length()>0)res.pop_back();
            else res.push_back(s[i]);
        }
        // reverse(res.begin(),res.end());
        return res;
        
    }
};