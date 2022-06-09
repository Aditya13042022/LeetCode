class Solution {
public:
    int myAtoi(string s) {
 while(s[0] == ' '){s.erase(s.begin());}
        bool neg = false;
        if (s[0] == '-' or s[0] == '+'){neg = s[0] == '-'; s.erase(s.begin());}
        uint32_t number = 0;
        for (char c : s) {
            if (!isdigit(c)){break;}
            if (number > (INT_MAX - c + '0') / 10){return neg ? INT_MIN : INT_MAX;}
            number = number * 10 + c - '0';
        }
        return neg ? -number : number;
    }
        
        
    
};