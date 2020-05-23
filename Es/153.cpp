#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int H,N,maxA=0,ans=1e9;
    cin >> H >> N;
    vector<long long int> A(N),B(N);
    for(int i=0;i<N;i++){
        cin >> A[i] >> B[i];
        maxA = max(A[i],maxA);
    }

    vector<long long int> dp(H+maxA,1e9);

    dp[0] = 0;

    for(int i=1;i<H+maxA;i++){
        for(int j=0;j<N;j++){
            if(0<=i-A[j]){
                dp[i] = min(B[j]+dp[i-A[j]],dp[i]);
            }
        }
    }

    for(int i=H;i<H+maxA;i++){
        ans = min(ans,dp[i]);
    }

    cout << ans << endl;
}