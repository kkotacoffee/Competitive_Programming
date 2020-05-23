#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,sum=0;
    cin >> N >> K;
    vector<long long int> H(N);
    for(long long int i=0;i<N;i++){
        cin >> H[i];
    }

    sort(H.begin(),H.end());

    for(long long int i=0;i<N-K;i++){
        sum += H[i];
    }

    cout << sum << endl;
}