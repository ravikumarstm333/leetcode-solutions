class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, bool> mp;
        for(char i:jewels){
            mp[i]=true;
        }
        int res=0;
        for(char ch:stones){
            if(mp.contains(ch))res++;
        }
        return res;
    }
};