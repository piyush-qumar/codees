class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>x;
        int xo=0,i;
        for(i=0;i<nums.size();i++){
        xo=xo^nums[i];
            x.push_back(xo);}
        int k=pow(2,maximumBit);
            for(i=0;i<x.size();i++){
                x[i]=k-x[i]-1;
            }
        reverse(x.begin(),x.end());
        return x;
        
    }
};