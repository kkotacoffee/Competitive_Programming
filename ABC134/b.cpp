#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,D;
    cin >> N >> D;
    int a = N/(D*2 + 1);
    if (N==(D*2 +1)*a){
            cout << N/(D*2 + 1) << endl;
    }else { 
        cout << N/(D*2 + 1) + 1 << endl;
    }
}