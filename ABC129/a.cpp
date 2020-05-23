#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c;
    if(a<=b){
        if(b<=c){
            cout << a+b << endl; 
        }else{
            cout << a+c << endl;;
        }
    }else{
        if(a<=c){
            cout << a+b << endl;;
        }else{
            cout << b+c << endl;;
        }
    }
    return 0;
}