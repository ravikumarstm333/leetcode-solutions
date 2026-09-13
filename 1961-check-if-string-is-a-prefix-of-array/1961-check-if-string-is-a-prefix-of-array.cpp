class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int ind=0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(ind == s.length()) return false;
                if(ind<s.length() && s[ind]!=words[i][j]) return false;
                ind++;
            }
            if(ind == s.length())break;
        }
        if(ind<s.length()) return false;
        return true;
    }
};