#include <bits/stdc++.h>

using namespace std;

int main(){
    int Q,H,S,D,N;
    long long int ans=0;
    cin >> Q >> H >> S >> D;
    cin >> N;
    while(N != 0){
        if(1<N){
            ans += min({Q*8,H*4,S*2,D});
            N -= 2;
        }else{
            ans += min({Q*4,H*2,S});
            N -= 1;
        }
    }

    cout << ans << endl;
}