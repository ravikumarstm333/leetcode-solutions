class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char i:s){
            if(i>='0' && i<='9'){
                if(st.empty()) continue;
                st.pop();
            }else st.push(i);
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};