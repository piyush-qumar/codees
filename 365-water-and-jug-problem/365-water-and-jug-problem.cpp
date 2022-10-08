class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        int z=jug1Capacity+jug2Capacity;
        int x=jug1Capacity,y=jug2Capacity;
        int op[]={x,-x,y,-y};
        queue<int>q;
        vector<int>v(z+1,0);
        q.push(0);
        v[0]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            if(node==targetCapacity)
                return true;
            for(int i=0;i<4;i++)
            {
                int newnode=node+op[i];
                if(newnode<=z and newnode>=0 and v[newnode]==0)
                {
                    q.push(newnode);
                    v[newnode]=1;
                }
            }
        }
        return false;
        
    }
};