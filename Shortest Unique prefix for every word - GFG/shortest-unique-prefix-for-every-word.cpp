//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    struct TrieNode{
        TrieNode *child[26];
        int count;
        TrieNode()
        {
            for(int i=0;i<26;i++)
            {
                child[i]=NULL;
            }
            count=0;
        }
    };
    void insert(string str,TrieNode *root)
    {
        
        //TrieNode *curr=root;
        for(int i=0;i<str.size();i++)
        {
            //int id=str[i]-'a';
            if(root->child[str[i]-'a']==NULL)
            {
                root->child[str[i]-'a']=new TrieNode();
                //root=root->child[str[i]-'a'];
            }
            root->count++;
            root=root->child[str[i]-'a'];
        }
    }
    string getp(string str,TrieNode*root)
    {
       // TrieNode *curr=root;
        int n=str.length();
        string prefix="";
         for(int i=0;i<n;i++)
        {   //int id=str[i]-'a';
            if(root->count==1)
            break;
            prefix+=str[i];
            root=root->child[str[i]-'a'];
        }
        return prefix;
        
    }
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
         TrieNode* root = new TrieNode();
           vector<string> res;
        for(int i = 0; i < n; i++)
        {
            insert(arr[i], root);
        }
      
        for(int i = 0; i < n; i++)
        {
            //string temp = ;
            res.push_back(getp(arr[i], root));
        }
        return res;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}

// } Driver Code Ends