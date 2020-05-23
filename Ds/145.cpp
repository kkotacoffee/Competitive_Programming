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
    long long int ans=1,div=1,X,Y,movesum,Ymove;
    cin >> X >> Y;

    Ymove = (2*Y-X)/3;

    movesum = (X+Y)/3;

    if((X+Y)%3!=0 || 2*X<Y || 2*Y<X){
        cout << 0 << endl;
        return 0;
    }

    for(int i=0;i<min(movesum-Ymove,Ymove);i++){
        ans *= movesum-i;
        ans %= 1000000007;
        div *= min(movesum-Ymove,Ymove)-i;
        div %= 1000000007;
    }

    ans *= modpow(div,1000000005,1000000007);

    cout << ans%1000000007 << endl;
}