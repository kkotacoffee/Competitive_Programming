#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph(100000),hate(100000);
int num[100001],size[100001],sub[100001];

void dfs(int a, int b){

    if(num[a]==0){
        num[a] = b;
        size[b]++;
    }

    for(int i=0;i<graph[a].size();i++){
        if(num[graph[a][i]]==0){
            size[b]++;
            num[graph[a][i]] = b;
            dfs(graph[a][i], b);
        }
    }
}

int main(){
    int N,M,K,x=1;
    cin >> N >> M >> K;

    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0;i<N;i++){
        dfs(i,x);
        x++;
    }

    for(int i=0;i<K;i++){
        int c,d;
        cin >> c >> d;
        c--;
        d--;
        if(num[c]==num[d]){
            sub[c]++;
            sub[d]++;
        }
    }

    for(int i=0;i<N;i++){
        cout << size[num[i]] - sub[i] - graph[i].size() - 1 << " ";
    }
}