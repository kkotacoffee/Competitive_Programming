// x‚Ìnæ‚Ìmod‚Å‚Ìmod‚ğ•Ô‚·

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