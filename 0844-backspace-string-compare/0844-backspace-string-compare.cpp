class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sts;
        stack<char> stt;
        for(char ch:s){
            if(ch=='#'){
                if(sts.empty()) continue;
                sts.pop();
            }else sts.push(ch);
        }
        for(char ch:t){
            if(ch=='#'){
                if(stt.empty()) continue;
                stt.pop();
            }else stt.push(ch);
        }
        while(!sts.empty() && !stt.empty()){
            if(sts.top()!=stt.top()) return false;
            sts.pop();
            stt.pop();
        }
        if(sts.empty() && stt.empty()) return true;
        return false;
    }
};