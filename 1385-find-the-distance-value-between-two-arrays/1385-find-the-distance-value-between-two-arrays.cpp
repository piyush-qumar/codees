class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        //int c=0;
        //set<int>s;
        int x=arr1.size();
        int z=x;
        int y=arr2.size();
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(abs(arr1[i]-arr2[j])<=d){
                    z--;
                    break;}
            }
        }
        return z;
    }
};