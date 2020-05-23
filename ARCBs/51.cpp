#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int K,fib[41];
    fib[0] = 1;
    fib[1] = 2;
    cin >> K;
    for(int i=2;i<=40;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << fib[K] << " " << fib[K-1] << endl;
}