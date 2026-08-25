class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(string s:words){
            if(s.substr(0,pref.length())==pref) count++;
        }
        return count;
    }
};