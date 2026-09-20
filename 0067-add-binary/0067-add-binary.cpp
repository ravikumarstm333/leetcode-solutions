class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int ra=a.length()-1;
        int rb=b.length()-1;
        string res="";
        while(ra>=0 && rb>=0){
            int bit=(a[ra]-'0')+(b[rb]-'0')+carry;
            res+=bit%2+'0';
            carry=bit/2;
            ra--;
            rb--;
        }
        while(ra>=0){
            int bit=carry+(a[ra]-'0');
            res+=bit%2+'0';
            carry=bit/2;
            ra--;
        }
           while(rb>=0){
            int bit=carry+(b[rb]-'0');
            res+=bit%2+'0';
            carry=bit/2;
            rb--;
        }
        if(carry==1) res+='1';
        for(int i=0;i<res.length()/2;i++){
            swap(res[i],res[res.length()-1-i]);
        }
        return res;
    }
};