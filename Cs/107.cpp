#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans=1000000000;
    cin >> N >> K;
    vector<int> x(N);
    for(int i=0;i<N;i++){
        cin >> x[i];
    }

    for(int i=K-1;i<N;i++){
        if(0<x[i] && x[i-K+1]<0){
            ans = min(2*min(abs(x[i]),abs(x[i-K+1]))+max(abs(x[i]),abs(x[i-K+1])),ans);
        }else{
            ans = min(ans,max(abs(x[i]),abs(x[i-K+1])));
        }
    }

    cout << ans << endl;
}