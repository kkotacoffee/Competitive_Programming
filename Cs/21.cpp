#include <bits/stdc++.h>

using namespace std;


int main(){
    long long int N,a,b,M,ans=1;
    cin >> N;
    cin >> a >> b;
    a--;
    b--;
    cin >> M;

    long long int d[N][N];
    vector<vector<int>> graph(N);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                d[i][j] = 0;
            }else{
                d[i][j] = 1e9;
            }
        }
    }

    for(int i=0;i<M;i++){
        int a,b,t;
        cin >> a >> b;
        a--;
        b--;
        d[a][b] = 1;
        d[b][a] = 1;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                d[j][k] = min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }

    long long int len = d[a][b];
    

    vector<long long int> color(N,-1),sum(N,0);
    color[a] = 0;
    sum[a] = 1;

    bool out = false;

    queue<int> Q;
    Q.push(a);

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        color[now] = 0;
        for(int i=0;i<graph[now].size();i++){
            if(color[graph[now][i]]==-1){
                if(sum[graph[now][i]]==0){
                    Q.push(graph[now][i]);
                }
                sum[graph[now][i]] += sum[now];

                if(graph[now][i]==b){
                    out = !out;
                }
            }
        }

        if(out){
            break;
        }
        cout << sum[6];
        sum[b] %= 1000000007;
    }

    cout << sum[b] << endl;
}