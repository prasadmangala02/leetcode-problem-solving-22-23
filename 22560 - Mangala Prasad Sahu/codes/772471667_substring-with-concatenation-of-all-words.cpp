class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> output;
        int numWords = words.size();
        int wordLength = words[0].size();
        int stringSize = s.size();
        int totalLength = numWords*wordLength;
        
        if(stringSize < totalLength) return output;
        
        // Define a unordered map storing the frequency of each word in words
        unordered_map<string,int> freq;
        
        for(auto it:words)
            freq[it]++;
        
        // Main part of the program
        //We needn't travel the whole string    
        for(int i = 0 ; i <= stringSize - totalLength ; i++){
            
            unordered_map<string,int> mp = freq;
            
            int j;
            
            for(j = 0 ; j < stringSize ; j++){
                // Creating words of size wordLength starting from the i+j*wordLength index
                string temp = s.substr(i+j*wordLength,wordLength);
                
                if(mp[temp] == 0)
                    break;
                else
                    mp[temp]--;
            }
            if(j == numWords)
                output.push_back(i);
                
        }
        
        return output;
            
    }
};