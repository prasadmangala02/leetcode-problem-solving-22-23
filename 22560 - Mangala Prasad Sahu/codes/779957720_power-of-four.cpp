class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1 || n == 4) return true;
        for(int i = 0 ; i < log2(n) ; i++){
            if(n == pow(4,i))
                return true;
        }
        return false;
    }
};