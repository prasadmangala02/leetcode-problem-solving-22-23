class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1 || n == 3) return true;
        for(int i = 0 ; i < log2(n) ; i++){
            if(n == pow(3,i))
                return true;
        }
        return false;
    }
};