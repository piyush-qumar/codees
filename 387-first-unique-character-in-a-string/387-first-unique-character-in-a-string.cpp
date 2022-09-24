class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>m;
        int x=s.size();
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
        return x==s.size()?-1:x ;
    }
};