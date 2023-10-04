class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();

        int i,j;

        if((s_size == 0) && (t_size == 0)) return true;
        for(i = 0,j = 0 ; j < t_size ; ){
            if((s[i] == t[j]) && (i < s_size)){
                // cout << s[i] << "Ok" << t[j]<< endl << "n" <<  i;
                i++;
            }
            j++;
        }
        // cout<< i <<endl;
        if(i == (s_size )){
            return true;
        }
        return false;
    }
};