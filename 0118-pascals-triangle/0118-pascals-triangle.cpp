class Solution {
public:
    vector<int>generateRow(int N)
    {
        long long res = 1;
        vector<int>vec;
        vec.push_back(1);
        for(int i=1;i<N;i++)
        {
            res = res*(N-i);
            res = res/i;
            vec.push_back(res);
        }
        return vec;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++) {
        result.push_back(generateRow(i));
        }
        return result;
    }
};