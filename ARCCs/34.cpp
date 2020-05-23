#include <bits/stdc++.h>

using namespace std;

map<long long int,long long int > mp;

void prime_factor(long long int n){
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ++mp[i];
            n/=i;
        }
    }

    if(n!=1){
        mp[n]++;
    }
}

int main(){
    long long int A,B,ans=1;
    cin >> A >> B;
    for(long long int i=B+1;i<=A;i++){
        prime_factor(i);
    }

    for(auto itr = mp.begin();itr!=mp.end();itr++){
        ans *= itr->second+1;
        ans %= 1000000007;
    }

    cout << ans << endl;
}