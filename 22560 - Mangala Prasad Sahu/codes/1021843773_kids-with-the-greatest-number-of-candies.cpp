class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> result(candies.size(), false);
        for(int i = 0 ; i < candies.size() ; i++){
            candies[i] += extraCandies;
            if(*max_element(candies.begin(), candies.end()) == candies[i]){
                result[i] = true;
            }
            candies[i] -= extraCandies;
        }

        return result;
    }
};