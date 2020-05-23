#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int N,M,m=0;
    cin >> N >> M;
    if(2<N && 2<M){
        cout << (N-2)*(M-2) << endl;
    }else if(N == 2 || M == 2){
        cout << "0" << endl;
    }else if(N == 1 && M == 1){
        cout << "1" << endl;
    }else{
        cout << max(m,max(N-2,M-2)*min(N,M)) << endl;
    }
}