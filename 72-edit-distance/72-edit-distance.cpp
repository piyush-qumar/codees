class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        int fin[m+1][n+1];
        int i,j;
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0)
                    fin[i][j]=j;
                else if(j==0)
                    fin[i][j]=i;
                else if(word1[i-1]==word2[j-1])
                    fin[i][j]=fin[i-1][j-1];
                else
                    fin[i][j]=1+min(fin[i-1][j],min(fin[i][j-1],fin[i-1][j-1]));
            }
        }
        return fin[m][n];
    }
};