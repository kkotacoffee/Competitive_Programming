#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    long long int ans =0;
    vector<long long int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(int i=0;i<N;i++){
        ans += a[i]*min({i+1,K,N-K+1,N-i});
    }

    cout << ans << endl;
}