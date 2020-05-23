#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,hito,hmin,ans=0,add=0;
    cin >> N >> M;

    for(int i=1;;i++){
        if(M<=i*i){
            hito = i;
            break;
        }
    }

    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());

    for(int i=0;;i++){
        if(A[N-hito]*2 <= A[N-1]+A[i]){
            hmin = i;
            break;
        }
    }

    for(int i=N-1;hmin<=i;i--){
        ans += A[i]*(i-hmin+1);
    }

    cout << ans << endl;
}