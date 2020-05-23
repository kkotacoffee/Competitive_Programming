#include <bits/stdc++.h>

using namespace std;

//ˆø”n‚Ü‚Å‚Ì‘f”—ñ‹“
//prime ‘f”Ši”[
//is_prime Še”š‚ª‘f”‚©‚Ç‚¤‚©‚ğŠi”[

int prime[100000];
bool is_prime[100001];

int sieve(int n){
    int p=0;
    for(int i=0;i<=n;i++){
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for(int i=0;i<=n;i++){
        if(is_prime[i]){
            prime[p++] = i;
            for(int j=2*i;j<=n;j+=i){
                is_prime[j] = false;
            }
        }
    }
    return p;
}

int main(){
    int Q;
    sieve(100001);
    vector<bool> l2017(100001,false);
    int sum[100001],add=0;
    sum [0] = sum[1] = sum[2] = 0;
    cin >> Q;
    for(int i=3;i<=100000;i++){
        if(is_prime[i] && is_prime[(i+1)/2]){
            l2017[i] = true;
            add++;
        }
        sum[i] = add;
    }

    for(int i=0;i<Q;i++){
        int l,r;
        cin >> l >> r;
        if(l2017[r] && r==l){
            cout << 1 << endl;
        }else if(l2017[l]){
            cout << sum[r]-sum[l]+1 << endl;
        }else{
            cout << sum[r]-sum[l] << endl;
        }
    }
}