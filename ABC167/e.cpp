#include <bits/stdc++.h>

using namespace std;

const int MAX = 510000;
const int MOD = 998244353;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


long long int modpow(long long int x,long long int n,long long int mod){
    long long int res = 1;
    while(n>0){
        if(n&1){
            res = (res*x)%mod;
        }
        x = (x*x)%mod;
        n >>= 1;
    }
    return res;
}


int main(){
    long long int N,M,K,ans=0;
    cin >> N >> M >> K;

    COMinit();

    for(int i=0;i<=K;i++){
        long long int add=M;
        add *= modpow(M-1,N-1-i,998244353);
        add %= 998244353;
        add *= COM(N-1,i);
        add %= 998244353;
        ans += add;
        ans %= 998244353;
    }

    cout << ans << endl;
}