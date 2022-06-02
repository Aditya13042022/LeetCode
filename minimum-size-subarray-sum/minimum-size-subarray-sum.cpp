class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=100000,i=0;
        int sum=0,left=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans=min(ans,i-left+1);
                sum-=nums[left];
                left++;
            }
        
    }
        return (ans!=100000?ans:0);
}
};