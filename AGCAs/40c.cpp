#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,can=7,n=2,bcan=7;
    cin >> N;
    if(N==2){
        cout << 7 << endl;
    }else{
        for(int i=0;i<N/2-1;i++){
            can = can*9 + n*2;
            n = n*2;
            can %= 998244353;
            n %= 998244353;
        }
        cout << can << endl;
    }
}