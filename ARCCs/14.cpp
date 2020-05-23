#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,r=0,g=0,b=0;
    cin >> N;
    string S;
    cin >> S;
    for(int i=0;i<N;i++){
        if(S[i]=='R'){
            r++;
        }else if(S[i]=='G'){
            g++;
        }else{
            b++;
        }
    }

    cout << r%2 + g%2 + b%2 << endl;
}