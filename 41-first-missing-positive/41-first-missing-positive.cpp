class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int x=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<x)continue;
            if(nums[i]==x)x++;
        else return x;}
            return x;
    }
};