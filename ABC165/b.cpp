#include <bits/stdc++.h>

using namespace std;

int main(){
    long double X,now=100;
    cin >> X;
    for(int i=1;;i++){
        now *= 101;
        now /= 100;
        now = floor(now);
        if(X<=now){
            cout << i << endl;
            return 0;
        }
    }
}