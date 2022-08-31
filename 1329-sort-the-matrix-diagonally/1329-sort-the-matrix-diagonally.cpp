class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
           int m=mat.size();
        int n=mat[0].size();
        int i,j;
        map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        //map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                mp[i-j].push(mat[i][j]);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                mat[i][j]=mp[i-j].top();
                mp[i-j].pop();}}
return mat;
    }
};