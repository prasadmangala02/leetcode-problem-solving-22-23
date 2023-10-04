#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int i = 0;
        if(letters[i] > target){
            return letters[i];
        }
        while (i < letters.size() && letters[i] <= target ){
            i++;
        }
        if(i == letters.size()){
            return letters[0];
        }
        else return letters[i];
    }
};