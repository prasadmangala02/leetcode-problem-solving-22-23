class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash1[26]={0};
        int hash2[26]={0};
        int i=0;
        while(ransomNote[i]){
            hash1[ransomNote[i++]-'a']++;
        
        }
        i=0;
        while(magazine[i]){
            hash2[magazine[i++]-'a']++;

        }
        
        for(i=0;i<26;i++){
            if(hash2[i]<hash1[i])
                return false;
        }
        
        return true;
    }
};