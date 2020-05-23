#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,now=0;
    cin >> N >> M;
    vector<vector<int>> graph(N);
    vector<int> num(N,-1);
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0;i<N;i++){
        if(num[i]!=-1){
            continue;
        }

        queue<int> Q;
        Q.push(i);

        while(!Q.empty()){
            int x = Q.front();
            Q.pop();
            for(int j=0;j<graph[x].size();j++){
                if(num[graph[x][j]]==-1){
                    num[graph[x][j]]=now;
                    Q.push(graph[x][j]);
                }
            }
        }

        now++;
    }

    cout << now-1 << endl;
}