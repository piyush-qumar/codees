// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


/*class Solution
{
    public:
    static bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,cmp);
        double finval=0;
        int i;
        int finw=0;
        for(i=0;i<n;i++)
        {
            if(finw+arr[i].weight<=W)
            {
                finw+=arr[i].weight;
                finval+=arr[i].value;
            }
            else
            {
                int rem=W-finw;
                finval+=arr[i].value*((double)rem/(double)arr[i].weight);
                break;
            }
        }
        return finval;
    }
        
};*/
class Solution{
    public:
    static bool cmp(  Item a,  Item b)
    {
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        double finv=0.0,finw=0.0;
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i].weight+finw<=W){
            finw+=arr[i].weight;
            finv+=arr[i].value;
                 }
            else{
                int rem=W-finw;
                finv+=(arr[i].value/(double)arr[i].weight)*(double)rem;
                break;
            }
        }
        return finv;
    }
    
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends