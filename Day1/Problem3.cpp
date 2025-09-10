//https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
//convert integer to sum of 2 numbers with9ut zero
class Solution {
private:
     bool containszero(int m){
            while(m>0){
                if(m%10==0){
                    return true;
                }
                m=m/10;
            }
            return false;
        }

public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int k=n-i;
            int j=i;
            if(!containszero(k) && !containszero(j)){
                return{j,k};

            }
        }
        return{};
       
    }
};