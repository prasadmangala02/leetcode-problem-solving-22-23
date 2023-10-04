class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int slen = s.length();
        int tlen = t.length();
        stack<int> stks,stkt;
        string strs,strt;
        
        for (int i = 0 ; i < slen ; i++){
            if(s[i] == '#'&& !stks.empty())
                stks.pop();
            else if(s[i]!='#')stks.push(s[i]);
        }
        
        for (int i = 0 ; i < tlen ; i++){
            if(t[i] == '#'&& !stkt.empty())
                stkt.pop();
            else if(t[i]!='#')stkt.push(t[i]);
        }
        
        while(!stks.empty()){
            strs.push_back(stks.top());
            stks.pop();     
        }
            
        while(!stkt.empty()){
            strt.push_back(stkt.top());
            stkt.pop();     
        }      
        return strs == strt;
    }
};