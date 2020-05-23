#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int x, long long int y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}

int main(){
    long long int N,M,len;
    bool flag =true;
    string S,T;

    cin >> N >> M;
    len = N*M/gcd(N,M);
    cin >> S;
    cin >> T;

    for(int i=0;i<gcd(N,M)+1;i++){
        if(S[i*(len/M)] != T[i*(len/N)]){
            flag = false;
        }
    }

    if(flag){
        cout << len << endl;
    }else{
        cout << "-1" << endl;
    }
}