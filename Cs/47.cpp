#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=0;
    string S;
    cin >> S;
    for(int i=0;i<S.length()-1;i++){
        if(S[i] != S[i+1]){
            ans++;
        }
    }
    cout << ans;
}