class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string> mp={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        vector<string> res={""};
        for(char d : digits){
            vector<string> temp;
            for(string s:res){
                for(char leter : mp[d]){
                    temp.push_back(s+leter);
                }
            }
            res=temp;
        }
        return res;
    }
};