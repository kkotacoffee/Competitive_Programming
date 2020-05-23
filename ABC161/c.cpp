#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int x,long long int y) {
  return y ? gcd(y, x%y) : x;
}

int main(){
    long long int N,K;
    cin >> N >> K;

    cout << min(abs(N-K*(N/K)),abs(N-K*(1+N/K))) << endl;
}