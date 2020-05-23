#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long  S;
    cin >> S;
    if(S%1000000000 !=0){
        cout << 0 << " " << 0 << " " << (1 + S/1000000000) << " " << 1 << " " << 1000000000 - S%1000000000 << " " << 1000000000 << endl;
    }else{
        cout << 0 << " " << 0 << " " << S/1000000000 << " " << 1 << " " << 0 << " " << 1000000000 << endl;
    }
}