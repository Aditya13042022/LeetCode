class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans; int start,end;
        if(nums.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int x= count(nums.begin(),nums.end(),target);
        if(x==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans; 
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                start=i;
                break;
            }
        }
        end=start+x-1;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
        
    }
};