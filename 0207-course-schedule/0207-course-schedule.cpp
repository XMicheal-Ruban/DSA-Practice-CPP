class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        vector<int> ans;
        vector<int> indegree(n , 0);
        for(auto x : pre){
            adj[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }
        queue<int> q;
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0) q.push(i);
        }
        while(!q.empty()){
            auto t = q.front();
            ans.push_back(t);
            q.pop();
            for(auto x : adj[t]){
                indegree[x]--;
                if(indegree[x] == 0) q.push(x);
            }
        }
        return ans.size() == n;
    }
};