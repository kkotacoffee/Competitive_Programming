#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int graph[N][N];
    for(int i=0;i<M;i++){
        int j,k;
        cin >> j >> k;
        j--;
        k--;
        graph[j][k] = 1; 
        graph[k][j] = 1;
    }

    for(int i=0;i<N;i++){
        int ans=0,check[N];
        memset(check,0,sizeof(check));
        for(int j=0;j<N;j++){
            if(graph[i][j]==1){
                for(int n=0;n<N;n++){
                    if(graph[j][n]==1 && graph[i][n]!=1 && i!=n && check[n]!=1){
                        ans++;
                        check[n]=1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}