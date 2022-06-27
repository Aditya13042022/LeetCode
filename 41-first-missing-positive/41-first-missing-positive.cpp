class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int min_positive=1;
        int i=0;
        while(i<n && nums[i]<=min_positive){
            if(nums[i]>0 && nums[i]==min_positive)
                min_positive++;
            i++;
        }
        return min_positive;
       }
    
};