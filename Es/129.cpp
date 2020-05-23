#include <bits/stdc++.h>

using namespace std;

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
    string L;
    cin >> L;
    long long int ans = 1;
    for(int i=1;i<=L.size();i++){
        if(L[L.size()-i]=='1'){
            ans += modpow(2,i,1000000007);
            ans %= 1000000007;
        }
    }

    cout << ans << endl;
}