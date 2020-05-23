#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,sum=0;
    cin >> N >> M;
    vector<long long int> A(N);
    for(int i=0;i<M;i++){
        cin >> A[i];
        sum += A[i];
    }

    if(N<sum){
        cout << -1 << endl;
    }else{
        cout << N-sum << endl;
    }
}