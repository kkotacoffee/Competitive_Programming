#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    double ans = 0;
    bool =
    cin >> N;
    vector<double> x(N),y(N);
    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(ans<abs(x[i]-x[j])*abs(x[i]-x[j])+abs(y[i]-y[j])*abs(y[i]-y[j])){
                ans = abs(x[i]-x[j])*abs(x[i]-x[j])+abs(y[i]-y[j])*abs(y[i]-y[j]);
            }
        }
    }

    cout << setprecision(15) << pow(ans,0.5000000000)/2.0000000 << endl;
}