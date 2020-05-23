#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<long double> X(N),R(N),H(N),sum(20001);

    sum[0] = 0;

    for(int i=0;i<N;i++){
        cin >> X[i] >> R[i] >> H[i];
    }

    for(int i=1;i<=20000;i++){
        for(int j=0;j<N;j++){
            if(i<=X[j]){
                continue;
            }else if(X[j]+H[j]<=i){
                sum[i] += R[j]*R[j]*M_PI*H[j]/3;
            }else{
                sum[i] += R[j]*R[j]*M_PI*H[j]/3 - ((H[j]-i+X[j])/H[j])*((H[j]-i+X[j])/H[j])*((H[j]-i+X[j])/H[j])*(R[j]*R[j]*M_PI*H[j]/3);
            }
        }
    }

    for(int i=0;i<Q;i++){
        int A,B;
        cin >> A >> B;
        cout << setprecision(20) << sum[B]-sum[A] << endl;
    }
}