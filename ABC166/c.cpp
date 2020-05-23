#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans=0;
    cin >> N >> M;
    vector<long long int> H(N);
    vector<vector<int>> graph(N);
    for(int i=0;i<N;i++){
        cin >> H[i];
    }

    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0;i<N;i++){
        bool ok= true;
        for(int j=0;j<graph[i].size();j++){
            if(H[i]<=H[graph[i][j]]){
                ok = false;
            }
        }

        if(ok){
            ans++;
        }
    }

    cout << ans << endl;
}