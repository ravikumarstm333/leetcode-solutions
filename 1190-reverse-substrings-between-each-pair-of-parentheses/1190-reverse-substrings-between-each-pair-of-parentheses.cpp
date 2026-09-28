class Solution {
public:
    void reverse(int i,int j,string &s){
        while(i<j){
            if(s[i]=='(' || s[i]==')'){
                i++;
            }
            if(s[j]=='(' || s[j]==')'){
                j--;
            }
            if(s[i]!='(' || s[i]!=')' && s[j]!='(' || s[j]!=')' ){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
    }
    string reverseParentheses(string s) {
        stack<int> index;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                index.push(i);
            }else if(s[i]==')'){
                reverse(index.top(),i,s);
                index.pop();
            }
            
        }
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]==')'){
                continue;
            }
            res+=s[i];
        }
        return res;

        
    }
};