#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,now=0,ans=0;
    cin >> N >> M;
    vector<vector<int>> graph(N);
    vector<int> color(N,-1);

    for(int i=0;i<M;i++){
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0;i<N;i++){

        queue<int> Q;

        if(color[i]==-1){
            color[i] = now;
            Q.push(i);
        }

        while(!Q.empty()){
            int node = Q.front();
            Q.pop();
            for(int j=0;j<graph[node].size();j++){
                if(color[graph[node][j]]==-1){
                    color[graph[node][j]] = now;
                    Q.push(graph[node][j]);
                }
            }
        }

        now++;
    }

    for(int i=0;i<now;i++){
        int node=0,edge=0;
        for(int j=0;j<N;j++){
            if(color[j] == i){
                node++;
                edge += graph[j].size();
            }
        }

        if(node-1 == edge/2){
            ans++;
        }
    }

    cout << ans << endl;

}