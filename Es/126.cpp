#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=0;
    cin >> N >> M;

    vector<vector<int>> graph(N);
    vector<int> color(N,-1);

    for(int i=0;i<M;i++){
        int x,y,z;
        cin >> x >> y >> z;
        x--;
        y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=0;i<N;i++){

        queue<int> Q;

        if(color[i]==-1){
            color[i] = ans;
            ans++;
            Q.push(i);
        }

        while(!Q.empty()){
            int now=Q.front();
            Q.pop();
            for(int j=0;j<graph[now].size();j++){
                if(color[graph[now][j]]==-1){
                    color[graph[now][j]] = color[i];
                    Q.push(graph[now][j]);
                }
            }
        }
    }

    cout << ans << endl;
}