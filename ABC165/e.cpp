#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M;
    cin >> N >> M;
    if(N%2==0){
        for(int i=0;i<M;i++){
            cout << N/2-i << " " << N/2+i << endl;
        }
    }else{
        for(int i=0;i<M;i++){
            cout << i+1 << " " << N-1-i << endl;
        }
    }
}