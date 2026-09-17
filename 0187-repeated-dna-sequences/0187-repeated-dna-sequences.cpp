class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        /// TC O(n*10) -> o(n)
        /// SC O(n)
        unordered_map<string ,int> mp;
        int n=s.length();
        int l=0;
        int r=9;
        if(n<10) return {};
        while(r<n){
            string sub = "";
            for(int i=l;i<=r;i++){
                sub+=s[i];
            }
            mp[sub]++;
            l++;
            r++;

        }
        vector<string> res;
        for(auto i:mp){
            if(i.second>1){
                res.push_back(i.first);
            }
        }
        return res;
        
    }
};