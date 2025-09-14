// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num=n;
        int sum=0;
        while(n>0){
            int rem=n%10;
            int cub=rem*rem*rem;
            sum+=cub;
            n=n/10;
        }
        if(num==sum){
            return true;
        }
        else{
            return false;
        }
    }
};