#include <bits/stdc++.h>

using namespace std;

int dp[10][10];
int w[10],v[10];
int n,W;

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> w[i] >> v[i];
    }

    cin >> W;

    for(int i=n-1;0<=i;i--){
        for(int j=0;j<=W;j++){
            if(j<w[i]){
                dp[i][j]=dp[i+1][j];
            }else{
                dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
            }
        }
    }
    cout << dp[0][W];
}