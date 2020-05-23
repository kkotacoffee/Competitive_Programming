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
    long long int W,H,ans=1,div=1;
    cin >> W >> H;
    W--;
    H--;
    for(int i=H+1;i<=W+H;i++){
        ans *= i;
        ans %= 1000000007;
    }

    for(int i=2;i<=W;i++){
        div *= i;
        div %= 1000000007;
    }

    ans *= modpow(div,1000000005,1000000007);

    ans %= 1000000007;

    cout << ans << endl;
}