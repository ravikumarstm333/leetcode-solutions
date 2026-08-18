class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.length()) return s;
        string res="";
        int next=(numRows-1)*2;
        for(int i=0;i<numRows;i++){
            string temp="";
            for(int j=i;j<s.length();j+=next){
                temp+=s[j];
                if(i!=0 && i!=numRows-1){
                    int pre=j+next-2*i;
                    if(pre<s.length())temp+=s[pre];
                }
            }
            res+=temp;

        }
        return res;
    }
};