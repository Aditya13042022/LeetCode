class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        for(int i=0;i<nums1.size();i++)
            merge.push_back(nums1[i]);
         for(int i=0;i<nums2.size();i++)
            merge.push_back(nums2[i]);
        sort(merge.begin(),merge.end());
        int n=merge.size();
        double ans;
        
        if(n%2==0)
        {
            ans=(merge[n/2]+merge[(n/2)-1])/2.0;
        }
        else ans=merge[n/2];
        return ans;
    }
};