#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,half,fennec=1,snuke=0;
    cin >> N;
    vector<vector<int>> graph(N);
    vector<int> color(N,-1);

    for(int i=0;i<N-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<vector<int>> Q;
    Q.push(vector<int> (1,0));
    len[0] = 0;

    while(!Q.empty()){
        bool out = false;
        vector<int> now = Q.front();
        Q.pop();
        for(int i=0;i<graph[now].size();i++){
            if(len[graph[now][i]]==-1){
                if(graph[now][i] == N-1){
                    half = len[now];
                    len[N-1] == -2;
                }else{
                    
                    len[graph[now][i]] = len[now] + 1;
                    Q.push(graph[now][i]);
                }
            }
        }
    }

    snuke = N-fennec;
    fennec -= half/2;
    snuke += half/2;
    if(snuke<fennec){
        cout << "Fennec" << endl;
    }else{
        cout << "Snuke" << endl;
    }

}