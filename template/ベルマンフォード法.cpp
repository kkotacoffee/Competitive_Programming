struct edge { int from, to, cost };

edge edges[Max_E];

int shortest_length[MAX_V];
int V,E;

void bellman_ford(int s){
    for(int i=0;i<V;i++){
        shortest_length[i] = INF;
    }
    shortest_length[s] = 0;
    while(1){
        bool update = false;
        for(int i=0;i<E;i++){
            edge e = edges[i];
            if(d[e.from]!=INF && shortest_length[e.to] > shortest_length[e.from]+e.cost){
                shortest_length[e.to] = shortest_length[e.from] + e.cost;
                update = true;
            }
        }
        if(!update){
            break;
        }
    }
}