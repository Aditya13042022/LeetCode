class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long y=0,z=x;
        while(z!=0)
        {
            y = y*10 + z%10;
            z=z/10;
        }
        if(x==y) return true;
        else return false;
        
    }
};