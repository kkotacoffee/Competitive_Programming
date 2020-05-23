#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans=0,RL=0;
    cin >> N >> K;
    string S;
    cin >> S;
    for(int i=0;i<N;i++){
        if(i!=0 && S[i]=='L' && S[i-1]=='L'){
            ans++;
        }
        if(i!=N-1 && S[i]=='R' && S[i+1]=='R'){
            ans++;
        }

        if(i!=N-1 && S[i]=='R' && S[i+1]=='L'){
            RL++;
        }
    }

    cout << min(ans+2*K,N-1) << endl;
}