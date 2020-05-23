#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a;
    b= a/1000;
    c=a/100-b*10;
    d=a/10-b*100-c*10;
    e=a-1000*b-100*c-10*d;
    if(b==c||c==d||d==e){
        cout << "Bad";
    } else{
        cout << "Good";
    }
    return 0;
}