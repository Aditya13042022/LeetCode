class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int largest=-1,index=0;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                largest=nums[i];
                index=i;}}
        for(int i=0;i<n;i++)
        {
            if(largest<nums[i]*2 && index!=i)
                return -1;
        }
        return index;
    }
};