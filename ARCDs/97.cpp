#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=0;
    cin >> N >> M;
    vector<int> p(N),color(N,-1);
    vector<vector<int>> graph(N);
    for(int i=0;i<N;i++){
        cin >> p[i];
        p[i]--;
    }

    for(int i=0;i<M;i++){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    queue<int> Q;

    for(int i=0;i<N;i++){

        vector<int> state;
        map<int,int> element;

        if(color[i]==-1){
            Q.push(i);
            color[i] = 0;
        }

        while(!Q.empty()){
            int now = Q.front();
            Q.pop();
            state.push_back(now);
            element[p[now]]++;
            for(int j=0;j<graph[now].size();j++){
                if(color[graph[now][j]]==-1){
                    Q.push(graph[now][j]);
                    color[graph[now][j]] = 0;
                }
            }
        }

        for(int j=0;j<state.size();j++){
            ans += element[state[j]];
        }
    }

    cout << ans << endl;
}