class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
int ans=0;
        int size=nums.size();
        if(target>nums[size-1]){
            return nums.size();
        }
        int i=0;
            while(target>nums[i])
            {
                
                if(target==nums[i])
                {
                    return i;
                }
                ans=i+1;
                i++;
            }
        return ans;
    }
};