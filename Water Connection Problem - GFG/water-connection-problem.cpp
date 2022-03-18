// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        // code here
        int i;
        vector<vector<int>>ans;
        vector<int>y;
        map<int,int>A;
        map<int,int>B;
        for(i=0;i<p;i++)
        {
            A.insert(pair<int,int>(a[i],i));
            B.insert(pair<int,int>(b[i],i));
        }
        for(i=0;i<p;i++)
        {
            if(B.find(a[i])==B.end())
            y.push_back(a[i]);
        }
        sort(y.begin(),y.end());
        for(i=0;i<y.size();i++)
        {
            int x=y[i];
            int mini=INT_MAX;
            int maxi=-1;
            int z=x;
            while(A.find(z)!=A.end()){
                mini=min(mini,d[A[z]]);
                z=b[A[z]];
                maxi=z;
            }
            ans.push_back({x,maxi,mini});
        }
        return ans;
    }
};







// { Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}  // } Driver Code Ends