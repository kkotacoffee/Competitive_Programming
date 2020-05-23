#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    vector<vector<pair<int,int>>> graph(N);
    queue<pair<int,int>> Q;
    map<int,pair<int,int>> M;
    map<pair<int,int>,int> color;

    for(int i=0;i<N-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back({b,-1});
        graph[b].push_back({a,-1});
        M[i] = {a,b};
    }

    for(int i=0;i<N;i++){
        ans = max(ans,(int)graph[i].size());
    }

    cout << ans << endl;

    for(int i=0;i<graph[0].size();i++){
        Q.push({graph[0][i].first,i+1});
        color[make_pair(0,graph[0][i].first)] = i+1;
        color[make_pair(graph[0][i].first,0)] = i+1;
    }

    while(!Q.empty()){
        pair<int,int> P;
        P = Q.front();
        Q.pop();
        int to = P.first;
        int out = P.second;
        int now = 1;
        for(int i=0;i<graph[to].size();i++){
            if(now==out){
                now++;
            }
            if(color[{to,graph[to][i].first}]==0){
                color[{to,graph[to][i].first}]=now;
                color[{graph[to][i].first,to}]=now;
                Q.push({graph[to][i].first,now});
                now++;
            }
        }
    }

    for(int i=0;i<N-1;i++){
        cout << color[M[i]] << endl;
    }
}