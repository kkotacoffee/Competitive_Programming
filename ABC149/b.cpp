#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int A,B,K;
    cin >> A >> B >> K;
    if(A<=K){
        cout << 0 << " " << max(B-(K-A),(long long int)0) << endl;
    }else{
        cout << A-K << " " << B << endl;
    }
}