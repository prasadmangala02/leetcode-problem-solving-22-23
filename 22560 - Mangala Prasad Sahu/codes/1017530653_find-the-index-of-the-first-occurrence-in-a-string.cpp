class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int hSize = haystack.size();
        int nSize = needle.size();

        if(nSize == 0){
            return 0;
        }
        for(int i = 0 ; i < hSize - nSize + 1 ; i++){
            int j = 0;
            while(j < nSize && needle[j] == haystack[i+j]){
                j++;
            }

            if(j == nSize){
                return i;
            }


        }

        return -1;
    }
};