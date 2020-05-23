#include <bits/stdc++.h>

using namespace std;

int main(){
    long double N,K,sum=1,div=1;
    cin >> N >> K;
    div = N*N*N;
    sum += 3*(N-K);
    sum += 3*(K-1);
    sum += 6*(N-K)*(K-1);
    cout << setprecision(20) << sum/div << endl;
}