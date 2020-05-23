#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,sum=0;
    cin >> N;
    vector<long long int> A(N),ans(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        sum += A[i];
    }

    ans[0] = sum;

    for(int i=1;i<N;i+=2){
        ans[0] -= 2*A[i];
    }

    for(int i=1;i<N;i++){
        ans[i] = 2*A[i-1]-ans[i-1];
    }

    cout << ans[0];

    for(int i=1;i<N;i++){
        cout << " " << ans[i];
    }

    cout << endl;
}