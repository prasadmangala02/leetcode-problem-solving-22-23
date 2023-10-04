class Solution {
public:
    // Using memoization
    vector<int> countBits(int n) {
        vector<int> res(n+1);

        // Because 0 has '0' number of 1's
        res[0] = 0;

        for(int i = 1 ; i <= n ; i++){
            res[i] = res[i/2] + i%2;
        }

        return res;
    }
};