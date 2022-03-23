// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {
        int i,j;
        sort(S,S+m);
        vector<long>ways(n+1);
        ways[0]=1;
        
        for(i=0;i<m;i++)
        for(j=0;j<ways.size();j++)
            if(S[i]<=j)
                ways[j]+=ways[j-S[i]];
       
        
        return ways[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends