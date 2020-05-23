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

long long int combination(long long int N, long long int R, long long int MOD){
    long long int ans = 1,div=1;
    for(long long int i=0;i<R;i++){
        ans *= N-i;
        div *= i+1;
        ans %= MOD;
        div %= MOD;
    }

    ans *= modpow(div,MOD-2,MOD);
    ans %= MOD;

    return ans;
}