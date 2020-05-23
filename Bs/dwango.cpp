#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int tmp=0,ans =0;
    string S;
    cin >> S;
    for(int i=1;i<S.size();i++){
        if(S[i-1]=='2' && S[i] == '5'){
            tmp++;
            i++;
            ans += tmp;
        }else{
            tmp=0;
        }
    }

    cout << ans << endl;
}