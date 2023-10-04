class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int size1 = word1.size();
        int size2 = word2.size();

        string result = "";
        int i = 0,j = 0;
        while(i < size1 || j < size2){
            if(i < size1) result = result + word1[i];
            if(j < size2) result = result + word2[j];
            i++;
            j++;
        }

        return result;
    }
};