class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>:: iterator it;
        for(int i=0;i<nums.size();i++)
        {
            it=nums.begin();
            int j=0;
            while(j<nums.size())
            {
                if(j==i)
                {
                    j++;
                    it++;
                    continue;
                }
                if(nums[i]==nums[j])
                {
                    nums.erase(it);
                    it--;
                    j--;
                }
                it++;
                j++;
            }
        }
        return nums.size();
    }
};