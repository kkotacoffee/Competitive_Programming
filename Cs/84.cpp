#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,time=0;
    cin >> N;
    vector<long long int> C(N-1),S(N-1),F(N-1),ans(N);
    for(int i=0;i<N-1;i++){
        cin >> C[i] >> S[i] >> F[i];
    }

    for(int i=0;i<N-1;i++){
        long long int now=0;
        now += C[i] + S[i];
        for(int j=i+1;j<N-1;j++){
            if(now<S[j]){
                now = S[j] + C[j];
            }else if(now%F[j]!=0){
                now += (F[j]-now%F[j]) + C[j];
            }else{
                now += C[j];
            }
        }
        ans[i] = now;
    }

    for(int i=0;i<N-1;i++){
        cout << ans[i] << endl;
    }

    cout << 0 << endl;
}