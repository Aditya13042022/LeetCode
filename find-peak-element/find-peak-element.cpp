class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return 0;
        int start=0,end=1;
        while(end<nums.size() && nums[start]<nums[end])
        {
            start++;end++;
        }
        return start;
        
    }
};