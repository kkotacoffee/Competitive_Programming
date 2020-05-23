#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int A,B,C;
    cin >> A >> B >> C;
    if(A*B*C%2==0){
        cout << "0" << endl;
    }else{
        cout << min(A*B,min(A*C,B*C)) << endl;
    }
}