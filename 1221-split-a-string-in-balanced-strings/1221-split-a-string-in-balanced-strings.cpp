class Solution {
public:
    int balancedStringSplit(string s) {
        int L=0;
        int R=0;
        int res=0;
        for(int i=0;i<s.length();){
            if(R!=0 && R!=0 && L==R){
                res++;
                R=0;
                L=0;
            }else if(s[i]=='L'){
                L++;
                i++;
            }
            else if(s[i]=='R'){
                R++;
                i++;
            }
        }
         if(R!=0 && R!=0 && L==R){
                res++;
                R=0;
                L=0;
            }
        return res;
        
    }
};