class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
            ans.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++)
            ans.push_back(nums2[i]);
        sort(ans.begin(),ans.end());
        int n=nums1.size()+nums2.size();
        double d=0;
        if(n%2!=0)
            d=ans[n/2];
        else
            d=(ans[n/2-1]+ans[n/2])/2.0;
            return d;
    }
};