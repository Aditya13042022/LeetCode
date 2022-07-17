class Solution {
    bool iscyclic(vector<vector<int>>&adj, vector<int>&visited, int cur)
    {
        if(visited[cur]==2) return true;
        
        visited[cur]=2;
        for(int i=0;i<adj[cur].size();i++)
        {
            if(visited[adj[cur][i]]!=1)
            {
                if(iscyclic(adj,visited,adj[cur][i])) return true;
            }
        }
        visited[cur]=1;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        
        for(int i=0;i<prerequisites.size();i++)
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        vector<int> visited(numCourses);
        
        for(int i=0;i<numCourses;i++)
        {
            if(visited[i]==0)
            {
                if(iscyclic(adj,visited,i))
                    return false;
            }
        }
        return true;
    }
};