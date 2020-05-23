#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
    if(x==0){
        return y;
    }else if(y==0){
        return x;
    }
    return y ? gcd(y, x%y) : x;
}

int main(){
    int N,ans=0;
    cin >> N;
    vector<int> A(N),F(N+1),B(N+1);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    F[0] = 0;
    B[N] = 0;

    for(int i=0;i<N;i++){
        F[i+1]=gcd(F[i],A[i]);
    }

    for(int i=N-1;0<=i;i--){
        B[i] = gcd(B[i+1],A[i]);
    }

    for(int i=0;i<N+1;i++){
        ans = max(ans,gcd(F[i],B[i+1]));
    }

    cout << ans << endl;
}