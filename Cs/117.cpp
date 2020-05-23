#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    long long int ans=0;
    vector<int> X(M),Y(M-1);
    for(int i=0;i<M;i++){
        cin >> X[i];
    }
    if(M<=N){
        cout << "0" << endl;
    }else{
        sort(X.begin(),X.end());

        for(int i=0;i<M-1;i++){
            int x = abs(X[i+1]-X[i]);
            ans += x;
            Y[i] = x;
        }

        sort(Y.begin(),Y.end());

        for(int i=0;i<N-1;i++){
            ans -= Y[M-2-i];
        }

        cout << ans << endl;
    }
}