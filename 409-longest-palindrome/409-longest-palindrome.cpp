class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        vector<int> temp(128,0);
        for(char c : s)
          temp[c]++;
        bool done = false;
        for(int i=0;i<128;i++)
        {
            if(temp[i]%2==0)
            {
                ans+=temp[i];
            }
            else if(temp[i]>1)
            {
                ans+=temp[i]-1;
                temp[i--]=1;
            }
            else if(temp[i]==1 & !done)
            {
                ans+=1;
                done = true;
            }
        }
        return ans;
        
    }
};