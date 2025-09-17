class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int larg=-1;
        while(n%2==0){
            larg=2;
            n=n/2;
        }
        for(int i=3;i*i<=n;i+=2){
            while(n%i==0){
                larg=i;
                n=n/i;
            }
        }
        if(n>2) larg=n;
        return larg;
    }
};