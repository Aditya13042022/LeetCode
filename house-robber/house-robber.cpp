class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return solve(nums.size(),dp,nums);
    }
    
    int solve(int n,vector<int> & dp, vector<int> nums)
    {
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        if(dp[n]!=-1) return dp[n];
        
        int pick = nums[n-1] + solve(n-2,dp,nums);
        int notpick = 0 + solve(n-1,dp,nums);
        
        return dp[n]=max(pick,notpick);
    }
};