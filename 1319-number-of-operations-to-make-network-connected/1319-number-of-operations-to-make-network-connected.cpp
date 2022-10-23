class Solution {
    private:
     void dfs(vector<vector<int>>&vec,vector<bool>&check,int s)
        {
            check[s]=true;
            for(int i: vec[s])
                if(!check[i])
                    dfs(vec,check,i);
        }
        
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        vector<vector<int>>vec(n);
        for(auto con:connections)
        {
            vec[con[0]].push_back(con[1]);
            vec[con[1]].push_back(con[0]);
        }
        vector<bool>check(n,false);
        int count=0;
        for(int i=0;i<n;i++)
        
            if(!check[i])
            {
                dfs(vec,check,i);
                count++;
            }
        
        return count-1;
       
    }
};