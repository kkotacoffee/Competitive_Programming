#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,C,i=0;
    cin >> A >> B >> C;
    if(A%2==1 || B%2 == 1 || C%2 == 1){
        cout << "0" << endl;
    }else{
        for(i=0;;i++){
            A /= 2;
            B /= 2;
            C /= 2;
            if(A%2==1 || B%2==1||C%2==1){
                if(A%2==B%2 && B%2==C%2){
                    i++;
                }
                break;
            }
        }

        if(A==B && B == C){
            cout << "-1" << endl;
        }else{
            cout << i+1 << endl;
        }
    }
}