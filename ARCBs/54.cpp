#include <bits/stdc++.h>

using namespace std;

int main(){
    long double P,u = 1e10, l = -1;
    cin >> P;

    if(P<=1.5){
        cout << P << endl;
        return 0;
    }

    for(int i=0;i<1000;i++){
        long double mid = (u+l)/2,tu,tl;

        tu = u + P/(pow(2,2*u/3));
        tl = l + P/(pow(2,2*l/3));

        if(tu<=tl){
            l = mid;
        }else{
            u = mid;
        }
    }

    cout << setprecision(20) << l + P/(pow(2,2*l/3)) << endl;
}