#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    unsigned long long H,W;
    cin >> H >> W;
    if(H==1 || W==1){
        cout << 1 << endl;
    }else if(H%2==1){
        int f=H/2 + 1, s = H/2;
        if(W%2==1){
            cout << f*(W/2+1) + s*(W/2) << endl;
        }else{
            cout << f*W/2 + s*W/2 << endl;
        }
    }else{
        int f=H/2, s = H/2;
        if(W%2==1){
            cout << f*(W/2+1) + s*(W/2) << endl;
        }else{
            cout << f*W/2 + s*W/2 << endl;
        }
    }
}