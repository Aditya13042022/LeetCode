class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int right=0,left=0;
        int n=nums.size();
        if(n==0 || n==1) return nums;
        while(right<n)
        {
            if(nums[right]%2!=0)
                right ++;
            else
            {
                swap(nums[right],nums[left]);
                right++;
                left++;
            }
        }
        return nums;
        
    }
};