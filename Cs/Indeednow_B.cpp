#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> graph(N);
    vector<bool> done(N,false);
    for(int i=0;i<N-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    priority_queue<int,vector<int>,greater<int>> Q;

    Q.push(0);
    done[0] = true;

    while(!Q.empty()){
        int now = Q.top();
        Q.pop();
        if(now!=0){
            cout << " ";
        }
        cout << now+1;

        for(int i=0;i<graph[now].size();i++){
            if(!done[graph[now][i]]){
                Q.push(graph[now][i]);
                done[graph[now][i]] = true;
            }
        }
    }

    cout << endl;

}