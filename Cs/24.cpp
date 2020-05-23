#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,D,K;
    cin >> N >> D >> K;
    vector<bool> up(K),done(K,false);
    vector<long long int> L(D),R(D),S(K),T(K),now(K),ans(K);
    for(int i=0;i<D;i++){
        cin >> L[i] >> R[i];
        L[i]--;
        R[i]--;
    }

    for(int i=0;i<K;i++){
        cin >> S[i] >> T[i];
        S[i]--;
        T[i]--;
        if(S[i]<T[i]){
            up[i] = true;
        }else{
            up[i] = false;
        }
        now[i] = S[i];
    }

    for(int i=0;i<D;i++){
        for(int j=0;j<K;j++){
            if(!done[j]){
                if(up[j]){
                    if(L[i]<=now[j]){
                        now[j] = max(now[j],R[i]);
                    }
                    
                    if(T[j]<=now[j]){
                        ans[j] = i+1;
                        done[j] = true;
                    }

                }else{
                    if(now[j]<=R[i]){
                        now[j] = min(now[j],L[i]);
                    }

                    if(now[j]<=T[j]){
                        ans[j] = i+1;
                        done[j] = true;
                    }
                }
            }
        }
    }

    for(int i=0;i<K;i++){
        cout << ans[i] << endl;
    }

    
}