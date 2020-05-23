#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    bool zero=false;
    int ans = 0;
    for(int i=0;i<S.size();i++){
        if(i%2==0){
            if(S[i]=='0'){
                zero = true;
            }
        }else{
            if(S[i]!='*'){
                if(!zero){
                    ans++;
                }else{
                    zero = false;
                }
            }
        }
    }

    if(!zero){
        ans++;
    }

    cout << ans << endl;
}