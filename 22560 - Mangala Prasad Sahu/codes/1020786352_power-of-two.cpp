class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        else return ((n == 1) || (n%2 == 0) && isPowerOfTwo(n/2));
    }
};