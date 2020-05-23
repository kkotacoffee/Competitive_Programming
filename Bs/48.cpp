#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,x;
    cin >> a >> b >> x;
    if(a==0 && x!=1){
        cout << 1+b/x-(a-1)/x << endl;
    }else{
        cout << b/x-(a-1)/x << endl;
    }
}