class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int ra=a.length()-1;
        int rb=b.length()-1;
        string res="";
        while(ra>=0 && rb>=0){
            int bit=(a[ra]-'0')+(b[rb]-'0')+carry;
            if(bit==0){
                res+='0';
                carry=0;
            }else if(bit==1){
                res+='1';
                carry=0;
            }
            else if(bit==2){
                res+='0';
                carry=1;
            }else if(bit==3){
                res+='1';
                carry=1;
            }
            ra--;
            rb--;
        }
        while(ra>=0){
            int bit=carry+(a[ra]-'0');
            if(bit==0){
                res+='0';
                carry=0;
            }else if(bit==1){
                res+='1';
                carry=0;
            }
            else if(bit==2){
                res+='0';
                carry=1;
            }
            ra--;
        }
           while(rb>=0){
            int bit=carry+(b[rb]-'0');
            if(bit==0){
                res+='0';
                carry=0;
            }else if(bit==1){
                res+='1';
                carry=0;
            }
            else if(bit==2){
                res+='0';
                carry=1;
            }
            rb--;
        }
        if(carry==1) res+='1';
        for(int i=0;i<res.length()/2;i++){
            swap(res[i],res[res.length()-1-i]);
        }
        return res;
    }
};