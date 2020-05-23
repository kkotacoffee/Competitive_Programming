#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,a=0,b=0,c=0;
    cin >> N >> M;
    if(M<N*2 || N*4<M){
        cout << "-1 -1 -1" << endl;
    }else{
        if(M-N*3<0){
            a = abs(M-N*3);
            b = N-a;
            c = 0;
        }else if(0<M-N*3){
            a = 0;
            c = M-N*3;
            b = N-c;
        }else{
            a = 0;
            b = N;
            c = 0;
        }

        cout << a << " " << b << " " << c << endl;
    }
}