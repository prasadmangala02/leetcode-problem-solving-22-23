class Solution {
public:
    bool isPalindrome(int x) {
        long int c=0;
        int y=x;
        if(x<0||(x%10==0 && x!=0)){
            return false;
        }
        else {
            while(x>0){
                c=(c*10)+x%10;
                x=x/10;
            }
            
            return y==c?true:false;
        }
    }
};