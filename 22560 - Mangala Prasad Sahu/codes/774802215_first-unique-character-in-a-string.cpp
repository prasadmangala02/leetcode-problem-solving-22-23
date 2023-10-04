class Solution {
public:
    int firstUniqChar(string s) {
        int index=-1,len = s.size();
        map <char,int> myMap;
        for(int i=0;i<len;i++){
            char tmp = s[i];
            myMap[tmp]++; 
        }
        
        for(int i = 0;i<len;i++){
            char tmp = s[i];
            if(myMap[tmp]==1){
                index = i;
                break;
            }
        }
        
        return index;
    }
};