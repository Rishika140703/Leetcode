class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0) return 1;
        if(n<0) return (double)(1/ myPow(x, -n));

        double half = myPow(x, n/2);
        if(n%2 == 0){
            return half * half;
        } else return half*half*x;
       
    }
};