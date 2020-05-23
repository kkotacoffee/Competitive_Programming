#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long H,now=3;
    cin >> H;
    if(H==1){
        cout << 1 << endl;
    }
    for(unsigned long long i=2;i<=H;i*=2){
        if(i<=H && H<i*2){
            cout << now << endl;
            break;
        }else{
            now = now*2 + 1;
        }
    }
}