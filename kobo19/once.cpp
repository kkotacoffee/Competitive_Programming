#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph,dmy;
int mx = 0,ans = 0,x;

int dfs(int s,int sum){
    for(int i=0;i<graph[s].size();i++){

        if(graph[s].size() == 1 && s != 0){
            mx = max(sum,mx);
        }
        graph[graph[s][i]].erase(find(graph.begin(),graph.end(),s));
        return dfs(graph[s][i],sum+1);
    }

    return mx;
}

int main(){
    int ans=0,N;
    cin >> N;

    vector<int> len(N,-1);
    graph.resize(N);

    for(int i=1;i<N;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }


if(grap
    dmy = graph;

    for(int i=0;i<N;i++){
        ans = max(ans,dfs(i,0));
        graph = dmy;
    }

    cout << ans << endl;
}