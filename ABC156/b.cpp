#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,now=1;
    cin >> N >> K;
    for(int i=0;i<N;i++){
        if(N<now*K){
            cout << i+1 << endl;
            break;
        }else{
            now *= K;
        }
    }
}