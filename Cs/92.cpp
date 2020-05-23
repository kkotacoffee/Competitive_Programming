#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,sum=0;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N+1);
    vector<int> C(N+1);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    B[0] = abs(A[0]);
    B[N] = abs(A[N-1]);

    sum += B[0];
    sum += B[N];

    for(int i=1;i<N;i++){
        B[i] = abs(A[i]-A[i-1]);
        sum += B[i];
    }

    C[0] = abs(A[1]);
    C[N-1] = abs(A[N-2]);

    for(int i=1;i<N-1;i++){
        C[i] = abs(A[i+1]-A[i-1]);
    }

    for(int i=0;i<N;i++){
        cout << sum - B[i] - B[i+1] + C[i] << endl;
    }

}