#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,u,v,longest=0;
    cin >> N >> u >> v;
    u--;
    v--;
    vector<int> graph[N];
    queue<int> Q;
    for(int i=0;i<N-1;i++){
        int j,k;
        cin >> j >> k;
        j--;
        k--;
        graph[j].push_back(k);
        graph[k].push_back(j);
    }

    int kyoriu[N];
    for(int i=0;i<N;i++){
        kyoriu[i] = -1;
    }

    kyoriu[u] = 0;
    Q.push(u);

    while(!Q.empty()){
        int now=Q.front();
        Q.pop();
        for(int i=0;i<graph[now].size();i++){
            if(kyoriu[graph[now][i]] == -1){
                kyoriu[graph[now][i]] = kyoriu[now]+1;
                Q.push(graph[now][i]);
            }
        }
    }


    int kyoriv[N];
    for(int i=0;i<N;i++){
        kyoriv[i] = -1;
    }
    kyoriv[v] = 0;
    Q.push(v);

    while(!Q.empty()){
        int now=Q.front();
        Q.pop();
        for(int i=0;i<graph[now].size();i++){
            if(kyoriv[graph[now][i]] == -1){
                kyoriv[graph[now][i]] = kyoriv[now]+1;
                Q.push(graph[now][i]);
            }
        }
    }

    int kyorim = -1;

    for(int i=0;i<N;i++){
        if(kyoriv[i]>=kyoriu[i] && kyorim<kyoriv[i]-kyoriu[i]){
            longest = max(longest,kyoriv[i]);
            kyorim = kyoriv[i]-kyoriu[i];
        }
    }

    cout << longest << endl;

}