class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int leftsum,rightsum;
        for(i=0;i<n;i++)
        {
            leftsum=0;
            for(j=0;j<i;j++)
                leftsum+=nums[j];
            rightsum=0;
            for(j=i+1;j<n;j++)
                rightsum+=nums[j];
            if(rightsum==leftsum)
                return i;
            
        }
        return -1;
        
    }
};