#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,ans=0;
    cin >> n >> x;
    x--;

    vector<int> h(n),rank(n,-1);
    vector<vector<int>> graph(n);
    vector<bool> has(n,false);

    for(int i=0;i<n;i++){
        cin >> h[i];
    }

    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> Q;
    Q.push(x);
    rank[x] = 0;

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(int i=0;i<graph[now].size();i++){
            if(rank[graph[now][i]] == -1){
                rank[graph[now][i]] = rank[now]+1;
                Q.push(graph[now][i]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(h[i] == 1){
            Q.push(i);
            has[i] = true;
        }
    }

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(int i=0;i<graph[now].size();i++){
            if(rank[graph[now][i]]<rank[now]){
                has[graph[now][i]] = true;
                Q.push(graph[now][i]);
            }
        }
    }

    Q.push(x);

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(int i=0;i<graph[now].size();i++){
            if(rank[now]<rank[graph[now][i]] && has[graph[now][i]]){
                ans += 2;
                Q.push(graph[now][i]);
            }
        }
    }

    cout << ans << endl;
}