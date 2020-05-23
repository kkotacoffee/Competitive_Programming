#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K;
    double ans = 0;
    cin >> N >> K;
    vector<double> R(N);
    for(int i=0;i<N;i++){
        cin >> R[i];
    }

    sort(R.begin(),R.end());

    for(int i=0;i<K;i++){
        for(int j=0;j<=i;j++){
            R[N-1-i] /= 2.00;
        }
        ans += R[N-1-i];
    }

    cout << setprecision(10) << ans << endl;
}