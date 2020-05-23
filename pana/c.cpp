#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long double a,b,c;
    cin >> a >> b >> c;
    if(0<c-a-b){
        if(4*a*b<(c-a-b)*(c-a-b)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
}