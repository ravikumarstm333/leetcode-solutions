class Solution {
public:
    int maxFreqSum(string s) {
        int arr[26]={0};
        int vowelmax=0;
        int con=0;
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
                if(arr[s[i]-'a']>vowelmax) vowelmax=arr[s[i]-'a'];
            }
            else if(arr[s[i]-'a']>con) con=arr[s[i]-'a'];
        }
        return vowelmax+con;
    }
};