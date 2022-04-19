class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size());
        
        for(int i = 0 ; i < nums.size() ; ++i){
            
            nums[abs(nums[i])-1] = -(nums[abs(nums[i])-1]);
            
            if(nums[abs(nums[i])-1] >0){
                result.push_back(abs(nums[i]));
            }
                
     
        }
        return result;
        
        
    }
};