class Solution {
public:
    int getInt(string s){
        int res=0;
        bool nega=false;
        if(s[0]=='-') nega=true;
        for(int i=0;i<s.length();i++){
            if(s[i]<'0' || s[i]>'9') continue;
            res=res*10+(s[i]-'0');
        }
        return nega?-res:res;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if((tokens[i][0]>='0' && tokens[i][0]<='9') || tokens[i].length()>1){
                st.push(getInt(tokens[i]));
            }else{
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(tokens[i]=="+") st.push(a+b);
                else if(tokens[i]=="-") st.push(a-b);
                else if(tokens[i]=="*") st.push(a*b);
                else if(tokens[i]=="/"){
                    if(b==0){
                        st.push(a);
                        break;
                    }
                    st.push(a/b);
                }
            }
        }
        return st.top();
        
    }
};