#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
  return y ? gcd(y, x%y) : x;
}

int main(){
    long long int A,B,C,D,e,sum=0,s=0;
    cin >> A >> B >> C >> D;
    sum = B-A+1;
    e = C*D/gcd(C,D);
    s = B/C + B/D - B/e - (A-1)/C - (A-1)/D + (A-1)/e ;
    cout << sum-s;
    return 0;
}