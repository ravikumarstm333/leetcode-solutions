class Solution {
public:
    int minLength(string s) {
        string news=s;
        string res="";
        while(true){
            stack<char> st;
            bool have=false;
            for(char i:news){
                if(st.empty()) st.push(i);
                else if(i=='B' && st.top()=='A'){
                    st.pop();
                    have=true;
                }
                else if(i=='D' && st.top()=='C'){
                    st.pop();
                    have=true;
                }
                else st.push(i);
            }
            while(!st.empty()){
                res=st.top()+res;
                st.pop();
            }
            if(have){
                news=res;
                res="";
            }else break;
        }
        return res.length();
    }
};