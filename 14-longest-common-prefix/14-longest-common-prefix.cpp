class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        while(strs.size()!=0)
        {
        sort(strs.begin(),strs.end());
        string s=strs[0];
        string x=strs[strs.size()-1];
        string ans="";
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==x[i])
                ans=ans+s[i];
        else
            break;}
        
                return ans;
            
    }
        return "";
    }
};