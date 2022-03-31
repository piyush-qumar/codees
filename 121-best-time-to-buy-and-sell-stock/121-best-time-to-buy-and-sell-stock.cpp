class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int x=100000;
        int max=0;
        for(int i=0;i<n;i++){
            if(x>prices[i])
                x=prices[i];
        //for(int i=0;i<n;i++)
            if(prices[i]-x>max)
                max=prices[i]-x;}
        return max;
        
            
    }
};