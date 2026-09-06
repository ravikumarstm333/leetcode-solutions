class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string t="";
        string after="";
        for(int i=0;i<s.length();i++){
            if(s[i]==x){
                after+=s[i];
            }else{
                t+=s[i];
            }
        }
        return t+after;

    }
};