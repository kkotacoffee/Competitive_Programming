#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int a,b,c,d,sum=1,n,i;
    cin >> s;
    a = s[0] - '0';
    b = s[1] - '0';
    c = s[2] - '0';
    d = s[3] - '0';
    sum = a;

    for(i=0;i<8;i++){
        n=i;
        if((n&1)==1){
            sum += b;
        }else{
            sum -= b;
        }
        n = n>>1;
        if((n&1)==1){
            sum += c;
        }else{
            sum -= c;
        }
        n = n>>1;
        if((n&1)==1){
            sum += d;
        }else{
            sum -= d;
        }

        if(sum == 7){
            break;
        }else{
            sum = a;
        }
    }

    cout << a;        
    if((i&1)==1){
        cout << "+";
    }else{
        cout << "-";
    }
    cout << b;
    i >>= 1;
    if((i&1)==1){
        cout << "+";
    }else{
        cout << "-";
    }
    cout << c;
    i >>= 1;
    if((i&1)==1){
        cout << "+";
    }else{
        cout << "-";
    }
    cout << d;

    cout << "=7" << endl;
}