#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,l=0,u,ans=0;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<K-1;i++){
        if(A[i+1]<=A[i]){
            l = i+1;
        }
    }

    u = K-1;

    while(u!=N){
        if(K-1<=u-l){
            ans++;
        }

        if(A[u+1]<=A[u]){
            l = u+1;
        }

        u++;
    }

    cout << ans << endl;
}