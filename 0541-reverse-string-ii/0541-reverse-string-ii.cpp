class Solution {
public:
    void reverse(string &s,int is,int ie){
        while(is<ie){
            char t=s[is];
            s[is]=s[ie];
            s[ie]=t;
            is++;
            ie--;
        }
    }
    string reverseStr(string s, int k) {
        if(s.length()<=k){
            reverse(s,0,s.length()-1);
            return s;
        }
        bool rever=true;
        for(int i=0;i<s.length();i+=k){
            if(rever){
                if((i+k-1)<=s.length()){
                    reverse(s,i,i+k-1);
                }else{
                    reverse(s,i,s.length()-1);
                }
                rever=false;
            }else{
                rever=true;
            }
        }
        return s;
    }
};