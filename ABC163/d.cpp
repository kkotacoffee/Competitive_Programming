#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,ans=0;
    cin >> N >> K;
    vector<long long int> mn(N+1),mx(N+1);
    mn[0] = 0;
    for(int i=1;i<=N;i++){
        mn[i] = mn[i-1] + i;
    }

    mx[N] = N;

    for(int i=N-1;0<=i;i--){
        mx[i] = mx[i+1] + i;
    }

    for(int i=K-1;i<=N;i++){
        ans += mx[N-i]-mn[i]+1;
        ans %= 1000000007;
    }

    cout << ans << endl;
}