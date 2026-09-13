class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<int,char> mp;
        for(int i=0;i<s.length();i++){
            mp[i]=s[i];
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            int a=0;
            for(int j=0;j<words[i].size();j++){
                if(mp[j]!=words[i][j]){
                    a=1;
                    continue;
                }
            }
            if(a==0) ans++;
        }
        return ans;
    }
};