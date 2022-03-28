// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        
        int m=s.length();
        int n=t.length();
        int dp[1000][1000];
        int i,j;
        for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0)
            dp[i][j]=j;
            else if(j==0)
            dp[i][j]=i;
            else if(s[i-1]==t[j-1])
            dp[i][j]=dp[i-1][j-1];
            else
            dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
        }
    }
    return dp[m][n];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends