#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,C,add=0;
    cin >> A >> B >> C;
    if(A%2==B%2 && B%2==C%2){
    }else{
        if(A%2!=B%2 && B%2==C%2){
            B++;
            C++;
            add++;
        }else if(A%2==B%2 && B%2!=C%2){
            A++;
            B++;
            add++;
        }else{
            A++;
            C++;
            add++;
        }
    }
    cout << (max({A,B,C})-A)/2 +  (max({A,B,C})-B)/2 +  (max({A,B,C})-C)/2 + add << endl;
}