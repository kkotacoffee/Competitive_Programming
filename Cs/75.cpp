#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=0;
    cin >> N >> M;
    vector<vector<vector<int>>> graph(M,vector<vector<int>>(N));
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        for(int j=0;j<M;j++){
            if(i==j){
                continue;
            }else{
                graph[j][a].push_back(b);
                graph[j][b].push_back(a);
            }
        }
    }

    for(int i=0;i<M;i++){
        queue<int> Q;
        vector<int> color(N,-1);
        bool ok = false;
        color[0] = 1;
        Q.push(0);

        while(!Q.empty()){
            int now = Q.front();
            Q.pop();
            for(int j=0;j<graph[i][now].size();j++){
                if(color[graph[i][now][j]] == -1){
                    color[graph[i][now][j]] = 1;
                    Q.push(graph[i][now][j]);
                }
            }
        }

        for(int j=0;j<N;j++){
            if(color[j]==-1){
                ok = true;
            }
        }

        if(ok){
            ans++;
        }
    }

    cout << ans << endl;
}