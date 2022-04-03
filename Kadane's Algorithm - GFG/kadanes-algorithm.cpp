// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
       /* int i,s=arr[0],y=0;
        for(i=1;i<n;i++)
        {
        y=s;
        s=s+arr[i];
        if(s<=arr[i-1])
        s=arr[i-1];
        }
        return s;
    }*/
    int min=-1000,i,s=0;
    for(i=0;i<n;i++){
     s+=arr[i];
    if(s>min)
    min=s;;
    if(s<0)
    s=0;}
    return min;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends