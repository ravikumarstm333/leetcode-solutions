class Solution {
public:
    int howManyOneDigit(int n){
        int ones=0;
        while(n>0){
            if(n%2==1) ones++;
            n/=2;
        }
        return ones;
    }
    bool havePrime(int n){
        if(n<=1) return false;
        if(n<=3) return true;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int primes=0;
        for(int i=left;i<=right;i++){
            if(havePrime(howManyOneDigit(i))) primes++;
        }
        return primes;
        
    }
};