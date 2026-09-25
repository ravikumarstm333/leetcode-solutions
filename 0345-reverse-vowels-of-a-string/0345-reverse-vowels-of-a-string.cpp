class Solution {
public:
    bool vowel(char ch){
        vector<char> vowel({'a','e','i','o','u','A','E','I','O','U'});
        for(int i=0;i<vowel.size();i++){
            if(vowel[i]==ch)return true;
        }
        return false;
    }
    string reverseVowels(string s) {

       int l=0;
       int r=s.length()-1;
       while(l<r){
        if(vowel(s[l]) && vowel(s[r])){
            swap(s[l],s[r]);
            l++;
            r--;
        }if(!vowel(s[l])){
            l++;
        }if(!vowel(s[r])){
            r--;
        }
       }
       return s;
    }
};