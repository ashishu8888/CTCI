class Solution {
public:
    bool dfs(vector<int> adj[],vector<int> &vis, int s, int d)
    {
         vis[s] = 1;
        if(s == d)
        {
            return true;
        }
       
        bool ans = false;

        for(auto x : adj[s])
        {
            if(!vis[x])
            {
                vis[x] = 1;
                ans |= (dfs(adj,vis,x,d));
            }
        }

        return ans;
    }
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {

    vector<int> adj[n];
    vector<int> vis(n,0);

    for(int i=0;i<edges.size();i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }        


    return dfs(adj,vis,s,d);



    }
};
