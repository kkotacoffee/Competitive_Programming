#include <bits/stdc++.h>
 
using namespace std;

long long int factorial(long long int N){
    for(int i=N-1;1<i;i--){
        N *= i;
        N %= 1000000007;
    }
    return N;
    // 1000000007
}
 
int main(){
    long long int N,M;
    cin >> N >> M;
    if(1<abs(N-M)){
        cout << "0" << endl;
    }else if(abs(N-M) == 1){
        cout << factorial(N)*factorial(M)%1000000007;
    }else{
        cout << 2*factorial(N)*factorial(M)%1000000007;
    }
}