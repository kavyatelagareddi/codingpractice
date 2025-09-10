//Count Digits:Given a natural number n. You have to find the number of digits in it and return it.

class Solution {
  public:
    int countDigits(int n) {
        // code here
        if(n==0) return 1;
        int count=0;
        while(n>0){
            count++;
            n=n/10;
            
        }
        return count;
    }
};