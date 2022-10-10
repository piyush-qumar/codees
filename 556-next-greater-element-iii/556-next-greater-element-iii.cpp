class Solution {
public:
    int nextGreaterElement(int n) {
        auto str=to_string(n);
        next_permutation(str.begin(),str.end());
        int x=stoll(str);
        return (x<=n)?-1:x;
    }
};