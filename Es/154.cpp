#include <bits/stdc++.h>

using namespace std;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
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

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


int main(){
    string N;
    int K;
    long long ans=0;
    cin >> N;
    cin >> K;

    if(N.size()<6){
        long long int n = stoi(N);
        for(int i=0;i<=n;i++){
            int no = 0;
            string now = to_string(i);
            for(int j=0;j<now.size();j++){
                if(now[j]!='0'){
                    no++;
                }
            }

            if(no==K){
                ans++;
            }
        }

        cout << ans << endl;
        return 0;
    }

    COMinit();

    for(int i=K;i<N.size();i++){
        ans += pow(9,K)*COM(i-1,K-1);
    }

    if(K==1){
        ans += N[0]-'0';
    }else if(K==2){
        ans += (N[0]-'0')*9*COM(N.size()-2,K-1);
        ans += (N[0]-'0'-1)*9 + (N[1]-'0');
    }else{
        ans += (N[0]-'0')*pow(9,2)*COM(N.size()-2,2);
        ans += ((N[0]-'0'-1)*9+(N[1]-'0'))*9*COM(N.size()-3,K-2);
        ans += ((N[0]-'0'-1)*9+(N[1]-'0')-1)*9+(N[2]-'0');
        //ans += (N[1]-'0'-1)*9 + N[2]-'0';
    }

    cout << ans << endl;
}
