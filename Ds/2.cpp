#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=1;
    cin >> N >> M;
    vector<pair<int,int>> graph(M);
    for(int i=0;i<M;i++){
        cin >> graph[i].first >> graph[i].second;
        graph[i].first--;
        graph[i].second--;
    }

    for(int i=0;i<pow(2,N+1);i++){
        vector<int> use(N,0);
        int edge = 0,num=0;

        for(int j=0;j<N;j++){
            if(i>>j & 1 == 1){
                use[j] = 1;
                num++;
            }
        }

        for(int j=0;j<M;j++){
            if(use[graph[j].first] == 1 && use[graph[j].second]==1){
                edge++;
            }
        }

        if(num==2){
            if(edge==1){
                ans = max(num,ans);
            }
        }else if(2<num){
            if(edge==num*(num-1)/2){
                ans = max(ans,num);
            }
        }
    }

    cout << ans << endl;
}