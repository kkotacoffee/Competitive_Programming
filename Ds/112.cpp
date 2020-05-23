#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans;
    cin >> N >> M;
    for(int i=M/N;1<=i;i--){
        if(M%i==0){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}