class Solution {
public:
    
     void flood(vector<vector<int>>& image, int sr, int sc, int newColor,int x)
    {
        if(sr<0 or sr>=image.size() or sc<0 or sc>=image[0].size() or image[sr][sc]!=x or image[sr][sc]==newColor)return;

        
        image[sr][sc]=newColor;
        flood(image,sr-1,sc,newColor,x);
        flood(image,sr+1,sc,newColor,x);
        flood(image,sr,sc-1,newColor,x);
        flood(image,sr,sc+1,newColor,x);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int x=image[sr][sc];
        flood(image,sr,sc,newColor,x);
        return image;
        }
   
};