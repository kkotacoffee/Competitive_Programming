#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,A;
    cin >> H >> A;
    if(H<=A){
        cout << 1 << endl;
    }else{
        cout << (H+A-1)/A;
    }
}