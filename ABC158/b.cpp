#include <bits/stdc++.h>

using namespace std;

int main(){
    long long N,A,B;
    cin >> N >> A >> B;
    if(N<A){
        cout << N << endl;
    }else if(N<A+B){
        cout << A << endl;
    }else if(A==0){
        cout << 0 << endl;
    }else{
        cout << A*(N/(A+B)) + min(A,N%(A+B))<< endl;
    }
}