class Solution {
  public:
  bool dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,int& count,int &nodes)
  {
      visited[node]=1;
      count++;
      
      if(count==nodes) return 1;
      
      for(int j=0;j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]] && dfs(adj[node][j],adj,visited,count,nodes))
          return 1;
      }
      
      visited[node]=0;
      count--;
      
      return 0;
  }
    bool check(int n, int m, vector<vector<int>> edges) {
        // code here
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0]-1;//0 base conversion is a must
            int v=edges[i][1]-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visited(n,0);
        int count;
        for(int i=0;i<n;i++)
        
        {
            count=0;
            
            for(int j=0;j<n;j++)
            visited[j]=0;
            
            if(dfs(i,adj,visited,count,n))//nodes
            return 1;
        }
        
        return 0;
    }
};
