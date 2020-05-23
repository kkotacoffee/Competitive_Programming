#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans=0;
    cin >> N >> M;
    ans += min(N,M/2);
    if(N<M/2){
        M -= N*2;
        ans += M/4;
    }else{
    }
    cout << ans;
}