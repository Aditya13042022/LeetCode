class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters.size()==0) return NULL;
        int n=letters.size();
        sort(letters.begin(),letters.end());
        
        for(int i=0;i<n;i++)
        {
            if(letters[i]>target)
                return letters[i];
        }
        return letters[0];
    }
};