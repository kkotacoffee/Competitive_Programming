#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    int ans=0;
    cin >> S;
    for(int i=0;i<S.size()/2;i++){
        if(S[i]!=S[S.size()-i-1]){
            ans++;
        }
    }

    cout << ans << endl;
}