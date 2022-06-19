class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int y;
        for(int i=0;i<nums.size();i++)
        {
            if(count(nums.begin(),nums.end(),nums[i])==1)
                y=nums[i];
        }
        return y;
        
    }
};