class Solution {
public:
    int getLucky(string s, int k) {
        string inte="";
        for(char i :s){
            inte+=to_string(i-'a'+1);
        }
        int emp=0;
        for(int i=0;i<inte.length();i++){
            emp+=inte[i]-'0';
        }
        if(k==1){
            return emp;
        }
        for(int i=1;i<k;i++){
            int temp=0;
            while(emp>0){
                temp+=emp%10;
                emp/=10;
            }
            emp=temp;
        }
        return emp;
        
        
    }
};