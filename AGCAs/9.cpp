#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N;
    long long int ans=0;
    cin >> N;
    vector<long long int> A(N),B(N);
    for(int i=0;i<N;i++){
        cin >> A[i] >> B[i];
    }

    for(int i=N-1;0<=i;i--){
        A[i] += ans;

        if(A[i] != 0 && B[i]!=1 && (A[i]%B[i])!=0){
            ans += B[i]-(A[i]%B[i]);
        }
    }

    cout << ans << endl;
}