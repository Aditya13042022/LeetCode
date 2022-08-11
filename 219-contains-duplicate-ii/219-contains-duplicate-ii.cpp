class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>solve;
        vector<int>ans;
     for(int i=0; i<nums.size();i++)
     {
         if(solve.find(nums[i])!=solve.end())
         {
             
             ans.push_back(i);
             ans.push_back(solve[nums[i]]);
             int j=solve[nums[i]];

             if(abs(i-j)<=k)
             {
                 return true;
             }
            
         }
          solve[nums[i]]=i;
     }
        return false;
        
    }
};