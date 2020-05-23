#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int A,B,N;
    cin >> N >> A >> B;
    if(B<A || N == 1 && A != B){
        cout << "0" << endl;
    }else if(A==B || N==2){
        cout << "1" << endl;
    }else{
        cout << (N-2)*(B-A) +1 << endl;
    }
}