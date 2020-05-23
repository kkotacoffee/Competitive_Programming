#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;

    bool ok = true;
    for(int i=0;i<S.size()/2;i++){
        if(S[i]!=S[S.size()-1-i]){
            ok = false;
        }
    }

    for(int i=0;i<(S.size()-1)/4;i++){
        if(S[i]!=S[S.size()/2-1-i]){
            ok = false;
        }
    }

    for(int i=0;i<(S.size()-1)/4;i++){
        if(S[S.size()/2 + 1+i]!=S[S.size()-1-i]){
            ok = false;
        }
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}