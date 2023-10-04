// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> stk;
        
//         for (int i = 0; i < asteroids.size(); i++) {
//             // Handle the current asteroid
//             int currAsteroid = asteroids[i];
            
//             // Check for collisions
//             while (!stk.empty() && stk.top() > 0 && currAsteroid < 0) {
//                 int topAsteroid = stk.top();
//                 stk.pop();
                
//                 // Determine which asteroid survives or if both explode
//                 if (abs(topAsteroid) == abs(currAsteroid)) {
//                     // Both asteroids annihilate each other
//                     currAsteroid = 0;
//                     break; // Stop further collisions
//                 } else if (abs(topAsteroid) > abs(currAsteroid)) {
//                     // The top asteroid survives, push it back
//                     stk.push(topAsteroid);
//                     currAsteroid = 0;
//                     break; // Stop further collisions
//                 } // Else: currAsteroid survives, continue checking with the next asteroid in stack
//             }
            
//             if (currAsteroid != 0) {
//                 stk.push(currAsteroid);
//             }
//         }
        
//         vector<int> result(stk.size());
//         for (int i = stk.size() - 1; i >= 0; i--) {
//             result[i] = stk.top();
//             stk.pop();
//         }
        
//         return result;
//     }
// };

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> stk;
        vector<int> result;
        for(int i = 0; i < asteroids.size(); i++){
            int currAst = asteroids[i];
            while(!stk.empty() && stk.top() > 0 && currAst < 0){        
                int topAst = stk.top();
                stk.pop();

                if(abs(topAst) == abs(currAst)){
                    currAst = 0;
                    break;
                }
                else if(abs(topAst) > abs(currAst)){
                    stk.push(topAst);
                    currAst = 0;
                    break;
                }
            }
            if(currAst != 0) stk.push(asteroids[i]);

        }

        while(!stk.empty()){
            result.emplace_back(stk.top());
            stk.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};