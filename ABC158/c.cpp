#include <bits/stdc++.h>

using namespace std;

int main(){
    int  A,B;
    cin >> A >> B;
    for(int i=0;i<100000;i++){
        if(i*8/100==A && i*10/100==B){
            cout << i << endl;
            break;
        }

        if(i==99999){
            cout << "-1" << endl;
        }
    }
}