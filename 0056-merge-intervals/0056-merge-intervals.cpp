class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end());
        
        // cout<<intervals.back()[1];// a double vector will face issue with 
        for(auto i:intervals)
        {
            if(result.empty()||result.back().back()<i[0])
                result.push_back(i);
            else
                result.back().back()=max(result.back().back(),i[1]);
            // cout<<"hello";
        }
        
        return result;
    }
    
};