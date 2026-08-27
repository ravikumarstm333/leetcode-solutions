class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for(string s:words){
            string splitWord="";
            for(char ch:s){
                if(ch==separator){
                    if(splitWord.length()>0){
                        res.push_back(splitWord);
                    }
                    splitWord="";
                }else{
                    splitWord+=ch;
                }
            }
            if(splitWord.length()>0)res.push_back(splitWord);
        }
        return res;
        
    }
};