class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
       for(int i=0; i<nums.size(); i++){
           int curr = target - nums[i];
           if(m.count(curr)){
               res.push_back(m[curr]);
               res.push_back(i);
               // cout<<curr<<" "<<m[nums[i]]<<" "<<endl;
           }
           else{
               m[nums[i]] = i;
               cout<<nums[i]<<" "<<m[nums[i]]<<" ";
           }
       }
        return res;
    }
};