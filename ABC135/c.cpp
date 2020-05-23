#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int ans=0;
    cin >> N;
    vector<long long int> A(N+1),B(N);
    for(int i=0;i<=N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cin >> B[i];
    }

    for(int i=0;i<N;i++){
        if((A[i]+A[i+1])<=B[i]){
            ans += A[i] + A[i+1];
            A[i+1] = 0;
        }

        if(A[i]<=B[i] && (A[i]+A[i+1])>B[i]){
            ans += B[i];
            A[i+1] -= (B[i] - A[i]);
        }

        if(B[i]<A[i]){
            ans += B[i];
        }
    }

    cout << ans << endl;
}