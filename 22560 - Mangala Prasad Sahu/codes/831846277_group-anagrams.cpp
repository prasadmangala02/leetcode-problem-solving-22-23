class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // At first create a new list
        vector<string> sortedList;
        vector<vector<string>> resultList;
        
        // Map for string and its anagrams
        unordered_map<string,vector<string>> stringMap;
        
        
        
        int len = strs.size();
        // cout << "size" << len;
        
        string sstring;
        
        for(string s:strs){
            sstring = s;
            sort(sstring.begin(), sstring.end());
            stringMap[sstring].push_back(s);
        }
        
        for(auto res:stringMap){
            resultList.push_back(res.second);
        }
//         for(int itr = 0 ; itr < len ; itr
        
        // for(int i = 0 ; i < len ; i++){
        //     cout << sortedList[i] << endl;
        // }
        
        
       return resultList;
        
    }
};