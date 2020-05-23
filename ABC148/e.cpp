#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=0;
    cin >> N;
    if(N%2==1){
        cout << 0 << endl;
    }else{
        N /= 2;
        for(long long int i=5;i<=N;i*=5){
            ans += N/i;
        }
        cout << ans << endl;
    }

}