class Solution {
  public:
  
  bool dfs(int node,vector<int>& color,vector<vector<int>> &adj,int m,int n)
  {
      //check for each color
      if(node==n) return 1;
      for(int i=1;i<=m;i++)
      {
          bool ispossible=1;
          for(int j=0;j<adj[node].size();j++){
              if(color[adj[node][j]]==i)//is j has already a same color 
              {
                  ispossible=0;
                  break;
              }
          }
          if(ispossible==0) continue;//next colour
          
          color[node]=i;//color assign kro
          
          if(dfs(node+1,color,adj,m,n))//move to next node
          return 1;
          
          color[node]=-1;//backtrack
      }
      return 0;
  }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        int n=v;
        vector<int>color(n,-1);
        vector<vector<int>>adj(n);//adjacency list
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);//undirected graph
            adj[v].push_back(u);
        }
        
        return dfs(0,color,adj,m,n);
        
        
    }
};
