vector<int> graph[V] 
int V; 
int color[V];

bool dfs(int v /*“h‚èn‚ß‚é’¸“_*/ ,int c /*“h‚èn‚ß‚Ì”š*/){
    color[v] = c;
    for(int i=0;i<G.size();i++){
        if(color[graph[v][i]]==c){
            return false;
        }
        if(color[graph[v][i]]==0 && ! bfs(G[v][i],-c)){
            return false;
        }
    }
    return true;
}


for(int i=0;i<V;i++){
    if(color[i]==0){
        if(!dfs(i,1)){
        //¸”sˆ—
        }
    }
}
//¬Œ÷ˆ—