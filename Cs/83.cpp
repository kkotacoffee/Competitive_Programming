#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int X,Y,ans=0;
    cin >> X >> Y;
    while(X<=Y){
        ans++;
        X *= 2;
    }

    cout << ans << endl;
}