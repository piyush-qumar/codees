class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>m;
        int x=10000000;
        int c=x;
        for (int i = 0; i < s.size(); i++){
            m[s[i]].first++;
            m[s[i]].second=i;
        }
        for(auto [j,k]:m)
            cout<<j<<" "<<k.first<<" "<<k.second<<endl;
            //<<endl<<j.second;
        for(const auto& [a,b]:m)
        {
            if(b.first==1)
                //x=b.second;
             x = min(x, b.second);
            //cout<<x<<endl;
        }
        if(x==c)
        return -1 ;
        else 
            return x;
    }
};