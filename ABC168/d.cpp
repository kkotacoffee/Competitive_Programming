#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<vector<int>> graph(N);
    vector<int> color(N,-1);
    for(int i=0;i<M;i++){
        int A,B;
        cin >> A >> B;
        A--;
        B--;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    queue<int> Q;

    Q.push(0);
    color[0] = 0;

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();

        for(int i=0;i<graph[now].size();i++){
            if(color[graph[now][i]]==-1){
                color[graph[now][i]] = now;
                Q.push(graph[now][i]);
            }
        }
    }

    for(int i=1;i<N;i++){
        if(color[i]==-1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    for(int i=1;i<N;i++){
        cout << color[i]+1 << endl;
    }
}