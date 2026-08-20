class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // TC O(n)
        // SC O(n)
        vector<string> res;
        int a=0;
        int b=0;
        // these a and b varibale for skip i%3 and i%5
        for(int i=1;i<=n;i++){
            a++;
            b++;
            if(a==3 && b==5){
                res.push_back("FizzBuzz");
                a=0;
                b=0;
            }
            else if(a==3){
                res.push_back("Fizz");
                a=0;
            }
            else if(b==5){
                res.push_back("Buzz");
                b=0;
            }
            else res.push_back(to_string(i));
        }
        return res;
    }
};