#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int W,N,K,ans=0;
    cin >> W;
    cin >> N >> K;
    long long int dp[N+1][W+1][K+1],A[N],B[N];

    for(int i=0;i<N;i++){
        cin >> A[i] >> B[i];
    }

    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++){
            for(int k=0;k<=K;k++){
                dp[i][j][k] = 0;
            }
        }
    }

    for(int k=1;k<=K;k++){
        for(int j=0;j<=W;j++){
            for(int i=1;i<=N;i++){
                if(0<=j-A[i-1]){
                    dp[i][j][k] = max(dp[i-1][j-A[i-1]][k-1] + B[i-1],dp[i-1][j][k]);
                }
            }
        }
    }

    for(int i=0;i<=W;i++){
        for(int j=0;j<=K;j++){
            ans = max(ans,dp[N][i][j]);
        }
    }

    cout << ans << endl;
}