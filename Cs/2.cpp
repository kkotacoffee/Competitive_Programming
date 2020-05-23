#include <bits/stdc++.h>

using namespace std;

int main(){
    double a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    c -= a;
    d -= b;
    e -= a;
    f -= b;

    cout << setprecision(10) << abs(c*f-d*e)/2 << endl;
}