#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int x, long long int y) {
  return y ? gcd(y, x%y) : x;
}

int main(){
    long long int A,B;
    cin >> A >> B;
    cout << A*B/gcd(A,B) << endl;
}