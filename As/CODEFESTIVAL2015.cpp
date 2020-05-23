#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,M,R,sum1=0,sum2=0;
    cin >> N >> K >> M >> R;
    vector<long long int> S(N-1);
    for(int i=0;i<N-1;i++){
        cin >> S[i];
    }

    sort(S.begin(),S.end());

    if(K==N){
        for(int i=0;i<N-1;i++){
            sum1 += S[i];
        }

        if((K*R-sum1)<=0){
            cout << 0 << endl;
        }else if(M<(K*R-sum1)){
            cout << -1 << endl;
        }else{
            cout << (K*R-sum1) << endl;
        }

    }else{
        for(int i=N-2;N-1-K<=i;i--){
            sum1 += S[i];
            sum2 += S[i];
        }

        sum2 -= S[N-1-K];

        if((K*R-sum1)<=0){
            cout << 0 << endl;
        }else if(M<(K*R-sum2)){
            cout << -1 << endl;
        }else{
            cout << (K*R-sum2) << endl;
        }
    }
}