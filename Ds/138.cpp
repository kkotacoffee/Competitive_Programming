#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,q;
    cin >> N >> q;
    vector<vector<int>> graph(N);
    vector<long long int> add(N,0),ans(N,0),color(N,-1);

    for(int i=0;i<N-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0;i<q;i++){
        long long int p,x;
        cin >> p >> x;
        p--;
        add[p] += x;
    }

    long long int sum = 0;

    queue<pair<int,long long int>> Q;

    Q.push({0,0});
    color[0] = 0;

    while(!Q.empty()){
        int now = Q.front().first;
        int sum = Q.front().second;
        Q.pop();
        sum += add[now];
        ans[now] = sum;
        for(int i=0;i<graph[now].size();i++){
            if(color[graph[now][i]]==-1){
                Q.push({graph[now][i],sum});
                color[graph[now][i]]=0;
            }
        }
    }

    for(int i=0;i<N;i++){
        cout << ans[i] << " ";
    }
}