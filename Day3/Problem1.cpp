class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num=x;
        long long y=0;
        while(x>0){
            int rem=x%10;
            
            y=y*10+rem;
            x=x/10;
        }
    return num==y;
        
    }
};