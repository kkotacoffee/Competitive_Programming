#include <bits/stdc++.h>

using namespace std;

struct node{
    int in=0;
    vector<pair<int,int>> to;
};

int ans = 0;
vector<map<int,node>> graph(1000);

void dfs(node now, int sum){
    for(int i=0;i<now.to.size();i++){
        graph[now.to[i].first][now.to[i].second].in--;
        if(graph[now.to[i].first][now.to[i].second].in == 0){
            if(graph[now.to[i].first][now.to[i].second].to.empty()){
                ans = max(ans,sum);
            }else{
                dfs(graph[now.to[i].first][now.to[i].second],sum+1);
            }
        }
    }
}

int main(){
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        vector<int> A(N-1);
        for(int j=0;j<N-1;j++){
            cin >> A[j];
            A[j]--;
            if(j!=0){
               graph[min(i,A[j-1])][max(i,A[j-1])].to.push_back({min(i,A[j]),max(i,A[j])});
               graph[min(i,A[j])][max(i,A[j])].in++;
               cout << min(i,A[j]) << max(i,A[j]) << endl;
               cout << graph[min(i,A[j])][max(i,A[j])].in << endl;
            }
        }
    }

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            cout << i << j;
            cout << graph[i][j].in << endl;
            
            if(graph[i][j].in==0){
                dfs(graph[i][j],0);
            }
        }
    }

    if(ans == 0){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}