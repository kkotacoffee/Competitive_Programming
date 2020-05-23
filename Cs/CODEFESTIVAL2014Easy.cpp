#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;

int main(){
    int n,m,s,t;

    cin >> n >> m;
    cin >> s >> t;
    s--;
    t--;

    vector<vector<P>> graph(n);

    for(int i=0;i<m;i++){
        int x,y,d;
        cin >> x >> y >> d;
        x--;
        y--;
        graph[x].push_back({y,d});
        graph[y].push_back({x,d});
    }

    priority_queue<P,vector<P>, greater<P>> Q;

    for(int i=0;i<n;i++){
        if(i==s || i==t){
            continue;
        }

        vector<int> len(n,1e7);

        Q.push({i,0});
        len[i] = 0;

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

        if(len[s]==len[t] && len[s]!=1e7 && len[t]!=1e7){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}