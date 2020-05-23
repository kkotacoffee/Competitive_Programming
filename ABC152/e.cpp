#include <bits/stdc++.h>

using namespace std;

unsigned long long gcd(unsigned long long x, unsigned long long y) {
  return y ? gcd(y, x%y) : x;
}

// x‚Ìnæ‚Ìmod‚Å‚Ìmod‚ð•Ô‚·

// x‚Ìnæ‚Ìmod‚Å‚Ìmod‚ð•Ô‚·
// x‚Ìnæ‚Ìmod‚Å‚Ìmod‚ð•Ô‚·

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
    unsigned long long N,now=1,ans=0,div=1,x;
    cin >> N;

    vector<unsigned long long> A(N),B(N);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    now = A[0];

    for(int i=1;i<N;i++){
        x = gcd(now,A[i]);
        now *= A[i];
        //cout << now;
        now %= 1000000007;
        now *= modpow(x,1000000005,1000000007);
        now %= 1000000007;
        //cout << now;
    }

    for(int i=0;i<N;i++){
        x = now;
        x *= modpow(A[i],1000000005,1000000007);
        x %= 1000000007;
        ans += x;
    }

    cout << ans%1000000007 << endl;
}