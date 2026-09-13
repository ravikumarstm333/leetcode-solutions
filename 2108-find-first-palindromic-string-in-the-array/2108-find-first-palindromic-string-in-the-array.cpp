class Solution {
public:
    bool palind(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[s.length()-1-i])return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(palind(s))return s;
        }
        return {};
    }
};