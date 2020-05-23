#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int K,N,ans;
    cin >> K >> N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    ans = A[N-1]-A[0];

    for(int i=1;i<N;i++){
        ans = min(ans,K-A[i]+A[i-1]);
    }

    cout << ans << endl;
}