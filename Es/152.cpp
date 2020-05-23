#include <bits/stdc++.h>

using namespace std;

map<long long int,long long int> prime_factor(long long int n){
    map<long long int,long long int> res;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ++res[i];
            n /= i;
        }
    }
    if(n!=1){
        res[n] = 1;
    }
    return res;
} 

int main(){
    int N;
    long long int ans=0;
    cin >> N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    vector<map<long long int,long long int>> now(N);
    map<long long int,long long int> ansmp;

    for(int i=0;i<N;i++){
        now[i] = prime_factor(A[i]);
        for(auto itr = now[i].begin(); itr != now[i].end(); ++itr) {
            ansmp[itr->first] = max(ansmp[itr->first],itr->second);
        }
    }

    for(int i=0;i<N;i++){
        long long int sum = 1;
        for(auto itr = ansmp.begin(); itr != ansmp.end(); ++itr){
            for(int j=0;j<itr->second-now[i][itr->first];j++){
                sum *= itr->first;
                sum %= 1000000007;
            }
        }
        ans += sum;
        ans %= 1000000007;
    }

    cout << ans << endl;
}