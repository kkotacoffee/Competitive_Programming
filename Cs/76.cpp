#include <bits/stdc++.h>

using namespace std;

int main(){
    string S,T;
    int ts=-1;
    cin >> S >> T;

    for(int i=S.size()-T.size();0<=i;i--){
        for(int j=0;j<T.size();j++){
            if(S[i+j] != T[j] && S[i+j]!='?'){
                break;
            }
            if(j==T.size()-1){
                ts = i;
            }
        }
        if(ts!=-1){
            break;
        }
    }

    if(ts == -1){
        cout << "UNRESTORABLE" << endl;
    }else{
        for(int i=0;i<T.size();i++){
            S[ts+i] = T[i];
        }
        for(int i=0;i<S.size();i++){
            if(S[i]=='?'){
                cout << 'a';
            }else{
                cout << S[i];
            }
        }
        cout << endl;
    }
}