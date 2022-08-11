class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int,int>solve;
        vector<int>ans;
        int sub;
        int check=0;
     for(int i=0; i<nums.size();i++)
     {
        
         sub=nums[i];
         if(solve.find(sub)!=solve.end())
         {
             
             ans.push_back(i);
             ans.push_back(solve[sub]);
             int j=solve[sub];
             check=abs(i-j);
             if(check<=k)
             {
                 return true;
             }
            
         }
          solve[nums[i]]=i;
     }
        return false;
        
    }
};