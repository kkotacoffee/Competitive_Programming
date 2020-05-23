#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<long long int,long long int>>> graph(100001);
int ans[1000001];

void dfs(long long int a, long long int x){
    for(int i=0;i<graph[a].size();i++){
        if(ans[graph[a][i].first]==0){
            if(graph[a][i].second%2==0){
                ans[graph[a][i].first] = x;
            }else{
                if(x==1){
                    ans[graph[a][i].first] = 2;
                }else{
                    ans[graph[a][i].first] = 1;
                }
            }
            dfs(graph[a][i].first, ans[graph[a][i].first]);
        }
    }
}

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N-1;i++){
        long long int u,v,w;
        cin >> u >> v >> w;
        u--;
        v--;
        pair<long long int,long long int> node;
        node.first = v;
        node.second = w;
        graph[u].push_back(node);
        node.first = u;
        graph[v].push_back(node);
    }

    ans[0] = 0;

    dfs(0,1);

    for(int i=0;i<N;i++){
        cout << ans[i]-1 << endl;
    }
}