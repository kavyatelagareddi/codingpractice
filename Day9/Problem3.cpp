#include <vector>
#include <numeric>  // For std::gcd

using namespace std;

class Solution {
public:
    // Helper function to calculate LCM
    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> stck;

        for (int num : nums) {
            while (!stck.empty() && gcd(num, stck.back()) > 1) {
                num = lcm(num, stck.back());
                stck.pop_back();
            }
            stck.push_back(num);
        }

        return stck;
    }
};
