class Solution
{
public:
//Function to return list containing vertices in Topological order.
    vector topoSort(int V, vector adj[])
    {
        vectorans;
        map<int,int>mp;
        for(int i=0;i<V;i++)
        {
            vectornums=adj[i];
           for(auto x:nums)
               mp[x]++;
        }
        queuepq;
       for(int i=0;i<V;i++)
       {
           if(mp[i]==0)
           pq.push(i);
       }
       while(!pq.empty())
       {
            int i=pq.front();
            ans.push_back(i);
           pq.pop();
         for(auto v:adj[i])
         {
             mp[v]--;
            if(mp[v]==0)
               pq.push(v);
        }
      }
        return ans;
    }
};