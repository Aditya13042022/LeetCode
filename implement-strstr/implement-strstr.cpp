class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==" ")
            return 0;
        if(haystack.find(needle)!=haystack[haystack.size()-1])
            return haystack.find(needle);
        return -1;
    }
};