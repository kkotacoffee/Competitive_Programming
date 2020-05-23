#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,M,sum=0;
    cin >> N >> K >> M;
    vector<int> A(N-1);
    for(int i=0;i<N-1;i++){
        cin >> A[i];
        sum += A[i];
    }

    if(M*N<=sum){
        cout << 0 << endl;
    }else if(M*N-sum<=K){
        cout << M*N - sum << endl;
    }else{
        cout << -1 << endl;
    }
}