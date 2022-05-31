class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>copy(n);
        for(int i=0;i<n;i++)
            copy[i]=heights[i];
        sort(copy.begin(),copy.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=copy[i])
                count++;
        }
        return count;
    }
};