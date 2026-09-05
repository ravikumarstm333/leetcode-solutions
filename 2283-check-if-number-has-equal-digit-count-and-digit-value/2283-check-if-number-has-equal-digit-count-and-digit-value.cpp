class Solution {
public:
    bool digitCount(string num) {
        map<char,int> mp;
        for(char i:num){
            mp[i]++;
        }
        for(int i=0;i<num.length();i++){
            char d='0'+i;
            if(mp.contains(d) && mp[d]!=(num[i]-'0'))return false;
            else if(!mp.contains(d) && num[i]!='0')return false;
        }
        return true;
        
    }
};