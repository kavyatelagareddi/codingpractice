//REVERSE INTEGER
//https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(long long x) {
        long long rev=0;
      
        if(x>0){
            while(x>0){
                 int rem=x%10;
                 rev=(rev*10)+rem;
                 x=x/10;
            }
        }
        else{
            x=-x;
            while(x>0){
                 int rem=x%10;
                rev=(rev*10)+rem;
                x=x/10;
            }
           rev=rev-(2*rev);
        }
        if (rev > INT_MAX) return 0;
        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return int(rev);
    }
};