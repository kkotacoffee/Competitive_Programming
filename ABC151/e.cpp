#include <bits/stdc++.h>

using namespace std;

// x��n���mod�ł�mod��Ԃ�

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// �e�[�u�������O����
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

// �񍀌W���v�Z
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
    int N,K;
    long long int ans=0;
    cin >> N >> K;
    vector<long long int> A(N);
    COMinit();
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());

    for(int i=0;i<N;i++){
        ans -= A[i]*COM(N-i-1,K-1);
        ans += A[i]*COM(i,K-1);
        ans %= 1000000007;
    }

    cout << ans%1000000007 << endl;
}