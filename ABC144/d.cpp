#include <bits/stdc++.h>

using namespace std;

int main(){
    double a,b,x;
    cin >> a >> b >> x;
    if(a*a*b/2 < x){
        cout << setprecision(12) << ((double)90*(double)2/M_PI)*atan((2*(a*a*b-x))/(a*a*a));
    }else{
        cout << setprecision(12) << ((double)90*(double)2/M_PI)*atan((a*b*b)/(2*x));
    }
}