#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=1;
    cin >> N;
    vector<int> w(N),dp(N,1);
    for(int i=0;i<N;i++){
        cin >> w[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(w[j]<w[i]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans,dp[i]);
    }

    cout << ans << endl;
}