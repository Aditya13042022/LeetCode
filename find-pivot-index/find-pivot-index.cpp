class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i, sum=0,leftsum=0;;
        for(i=0;i<n;i++)
            sum+=nums[i];
        for(i=0;i<n;i++)
        {
            sum-=nums[i];
                if(leftsum==sum)
                    return i;
            leftsum+=nums[i];
        }
        return -1;
        
    }
};