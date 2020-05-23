#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;

int main(){
    long long int N,M,T,ans=0;

    cin >> N >> M >> T;

    vector<long long int> A(N),len(N,1e11),revlen(N,1e11);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    vector<vector<P>> graph(N),revgraph(N);

    for(int i=0;i<M;i++){
        int x,y,d;
        cin >> x >> y >> d;
        x--;
        y--;
        graph[x].push_back({y,d});
        revgraph[y].push_back({x,d});
    }

    priority_queue<P,vector<P>, greater<P>> Q;

    Q.push({0,0});
    len[0] = 0;

    while(!Q.empty()){
        P now = Q.top();
        int now1 = now.first, now2 = now.second;
        Q.pop();

        if(len[now1]<now2){
            continue;
        }

        for(int i=0;i<graph[now1].size();i++){
            P tmp = graph[now1][i];
            if(len[now1] + tmp.second <len[tmp.first]){
                len[tmp.first] = len[now1] + tmp.second;
                Q.push({tmp.first,len[tmp.first]});
            }
        }
    }


    Q.push({0,0});
    revlen[0] = 0;

    while(!Q.empty()){
        P now = Q.top();
        int now1 = now.first, now2 = now.second;
        Q.pop();

        if(revlen[now1]<now2){
            continue;
        }

        for(int i=0;i<revgraph[now1].size();i++){
            P tmp = revgraph[now1][i];
            if(revlen[now1] + tmp.second <revlen[tmp.first]){
                revlen[tmp.first] = revlen[now1] + tmp.second;
                Q.push({tmp.first,revlen[tmp.first]});
            }
        }
    }

    for(int i=0;i<N;i++){
        if(len[i]+revlen[i]<=T){
            ans = max(A[i]*(T-len[i]-revlen[i]),ans);
        }
    }

    cout << ans << endl;
}
