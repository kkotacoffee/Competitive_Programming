#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,X,Y;
    cin >> N >> X >> Y;
    long long int ans[N][N];

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            ans[i][j] = 1e9;
        }
    }
    
    for(int i=1;i<N;i++){
        ans[i][i-1] = 1;
        ans[i-1][i] = 1;
    }

    ans[X-1][Y-1]=1;
    ans[Y-1][X-1]=1;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            ans[i][j] = min(j-1,ans;
        }
    }

    

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            ans[i][j] = min(j-1,;
        }
    }
}