#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    long long int ans=0;
    cin >> n >> k;

    vector<vector<int>> graph(n);
    vector<int> hiku(n,0);
    vector<pair<int,int>> len(n,{-1,0}),lenbefore(n),lt(n-1);

    len[0] = {0,0};

    queue<pair<int,int>> Q; 
    pair<int,int> P;

    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    Q.push({0,0});

    while(!Q.empty()){
        P = Q.front();
        Q.pop();
        for(int i=0;i<graph[P.first].size();i++){
            if(len[graph[P.first][i]].first==-1){
                len[graph[P.first][i]] = {P.second+1,graph[P.first][i]};
                lenbefore[graph[P.first][i]] = len[graph[P.first][i]];
                Q.push({graph[P.first][i],P.second+1});
            }
        }
    }

    sort(len.begin(),len.end());

    for(int i=0;i<n;i++){

        for(int j=0;j<graph[len[n-1-i].second].size();j++){
            hiku[len[n-1-i].second] += hiku[graph[len[n-1-i].second][j]];
        }
        hiku[len[n-1-i].second]++;
    }

    for(int i=1;i<n;i++){
        lt[i-1].first = lenbefore[i].first-hiku[i];
        lt[i-1].second = n-hiku[i];
        //cout << len[i].first;
        //cout << hiku[i] << endl;
    }

    sort(lt.begin(),lt.end());

    for(int i=0;i<k;i++){
        //cout << get<1>(len[i]);
        ans += lt[n-2-i].first;
        //cout << get<2>(len[i]);
        //ans += (lt[n-2-i].second-n);
        ans++;
    }

    cout << ans << endl;
}