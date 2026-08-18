class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string res=strs[0];
        for(string str:strs){
            while(str.find(res)!=0){
                res=res.substr(0,res.length()-1);
            }

        }
        return res;
    }
};