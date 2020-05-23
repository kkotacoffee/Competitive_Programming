#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int A,B,N;
    cin >> A >> B >> N;
    long long int x = B*(N/B) -1;
    if(A==1 || B==1){
        cout << 0 << endl;
    }else if(N<B){
        cout << A*N/B + A*(N/B) << endl;
    }else{
        cout << A*x/B + A*(x/B) << endl;
    }
}