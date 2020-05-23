#include <bits/stdc++.h>

using namespace std;

int main(){
    long double N,K;
    cin >> N >> K;
    vector<long double> p(N);
    for(int i=0;i<N;i++){
        cin >> p[i];
    }

    long double sum=0,ans;

    for(int i=0;i<K;i++){
        sum += p[i];
    }

    ans = sum;

    for(int i=K;i<N;i++){
        sum = sum-p[i-K]+p[i];
        ans = max(ans,sum);
    }

    cout << setprecision(20) << (ans+K)/2.00000000 << endl;
}