class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        int i=0;
            while(target>nums[i])
            {
                
                if(target==nums[i])
                {
                    return i;
                }
                i++;
            }
        return i;
    }
};