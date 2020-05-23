#include <bits/stdc++.h>

using namespace std;

int main(){
    int X,Y,Z,K;
    cin >> X >> Y >> Z >> K;
    vector<long long int> A(X),B(Y),C(Z),BC(Y*Z),sum(K*K,0);
    for(int i=0;i<X;i++){
        cin >> A[i];
    }
    for(int i=0;i<Y;i++){
        cin >> B[i];
    }
    for(int i=0;i<Z;i++){
        cin >> C[i];
    }

    for(int i=0;i<Y;i++){
        for(int j=0;j<Z;j++){
            BC[Z*i+j] = B[i]+C[j];
        }
    }

    sort(A.begin(),A.end());
    sort(BC.begin(),BC.end());
    reverse(A.begin(),A.end());
    reverse(BC.begin(),BC.end());

    for(int i=0;i<min(K,X);i++){
        for(int j=0;j<min(K,Y*Z);j++){
            sum[i*K+j] = A[i] + BC[j];
        }
    }

    sort(sum.begin(),sum.end());
    reverse(sum.begin(),sum.end());

    for(int i=0;i<K;i++){
        cout << sum[i] << endl;
    }
}