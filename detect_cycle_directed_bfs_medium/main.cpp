public bool detectCycle(int V,vector<int> adj[]){
    int indegree[V]={0};
    for(int i=0;i<V;i++){
        int node=adj[i];
        for(auto it:adj[node]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int j=0;j<V;j++){
        if(indegree[j]==0){
            q.push(i);
        }
    }
    int cnt=0;
    while(!q.empty()){
        int nod=q.top();
        q.pop();
        cnt++;
        for(auto it:adj[nod]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    if(cnt!=V){
        return false;
    }
    return true;
};
