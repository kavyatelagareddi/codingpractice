class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int c1=0;
        int c2=1;
        int r1;
        for(int i=0;i<n;i++){
            r1=c1+c2;
            c2=c1;
            c1=r1;
        }
        return r1;
    }
};