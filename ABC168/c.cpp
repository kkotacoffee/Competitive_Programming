#include <bits/stdc++.h>

using namespace std;

int main(){
    long double A,B,H,M,h,m;
    cin >> A >> B >> H >> M;
    m = 6*M;
    h = 30*H + 0.5*M;

    cout << setprecision(20) << sqrt(A*A + B*B - 2*A*B*cos(M_PI*abs(h-m)/180)) << endl;
}