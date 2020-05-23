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
    long long n,a,b,ans,suba=1,subb=1,div=1;
    cin >> n >> a >> b;
    ans = modpow(2,n,1000000007);

    for(int i=0;i<a;i++){
        suba *= n-i;
        div *= a-i;
        suba %= 1000000007;
        div %= 1000000007;
    }

    suba *= modpow(div,1000000005,1000000007);
    suba %= 1000000007;

    div = 1;
        
     for(int i=0;i<b;i++){
        subb *= n-i;
        div *= b-i;
        subb %= 1000000007;
        div %= 1000000007;
    }

    subb *= modpow(div,1000000005,1000000007);
    subb %= 1000000007;

    if(n==2){
        cout << 0 << endl;
    }else{
        cout << (ans-suba-subb-1+2000000014)%1000000007 << endl;
    }
}