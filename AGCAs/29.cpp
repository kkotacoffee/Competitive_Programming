#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string S;
    cin >> S;
    long long int now = 0,ans = 0;
    for(int i=0;i<S.size();i++){
        if(S[i]=='W'){
            ans += i-now;
            now++;
        }
    }

    cout << ans << endl;
}