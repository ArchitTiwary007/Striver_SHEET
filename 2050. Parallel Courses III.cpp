class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>adj[n];
        for(int i=0;i<relations.size();i++)
        {
            adj[relations[i][0]-1].push_back(relations[i][1]-1);//convvert to base zero
        }

        vector<int>indeg(n,0);//indeg for topological sort
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                indeg[adj[i][j]]++;
            }
        }
        queue<int>q;

        for(int i=0;i<n;i++)
        if(!indeg[i])
        q.push(i);

        vector<int>pct(n,0);//track for prev cousre time
        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(int j=0;j<adj[node].size();j++)
            {
                indeg[adj[node][j]]--;
                if(!indeg[adj[node][j]])
                q.push(adj[node][j]);

                //maximum time to complete the prev course + current time

                pct[adj[node][j]]=max(pct[node]+time[node],pct[adj[node][j]]);
            }
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,pct[i]+time[i]);
        }
        return ans;
    }
};
