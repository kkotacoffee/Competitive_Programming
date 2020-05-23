#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=0;
    cin >> N;
    for(int i=pow(N,0.5);0<i;i--){
        if(N%i==0){
            ans += i;
            ans += N/i;
            break;
        }
    }

    cout << ans-2;
}