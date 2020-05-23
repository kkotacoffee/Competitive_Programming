#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,R,S,P,ans=0;
    string T;
    cin >> N >> K;
    cin >> R >> S >> P;
    cin >> T;
    for(int i=0;i<N;i++){
        if(i<K){
            if(T[i]=='r'){
                ans += P;
            }else if(T[i]=='s'){
                ans += R;
            }else{
                ans += S;
            }
        }else{
            if(T[i-K]!=T[i]){
                if(T[i]=='r'){
                    ans += P;
                }else if(T[i]=='s'){
                    ans += R;
                }else{
                    ans += S;
                }
            }else{
                T[i] = 'a';
            }
        }
    }

    cout << ans << endl;
}