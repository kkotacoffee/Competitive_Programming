#include <bits/stdc++.h>

using namespace std;

int main(){
    double N,avl=0;
    cin >> N;
    vector<double> x(N),y(N);
    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            avl += pow((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]),0.5);
        }
    }

    cout << setprecision(12) << avl*2/N << endl;
}