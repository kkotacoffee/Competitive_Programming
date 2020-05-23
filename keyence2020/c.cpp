#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,S;
    cin >> N >> K >> S;

    if(S!=1e9){
        for(int i=0;i<N;i++){
            if(i<K){
                cout << S << " ";
            }else{
                cout << 1000000000 << " ";
            }
        }
    }else{
        for(int i=0;i<N;i++){
            if(i<K){
                cout << S << " ";
            }else{
                cout << 1 << " ";
            }
        }
    }
}