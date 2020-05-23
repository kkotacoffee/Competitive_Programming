#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    int in=0;
    cin >> S;
    if(S=="{}"){
        cout << "dict" << endl;
        return 0;
    }
    for(int i=0;i<S.size();i++){
        if(S[i]=='{'){
            in++;
        }else if(S[i]=='}'){
            in--;
        }else if(S[i]==':'){
            if(in==1){
                cout << "dict" << endl;
                return 0;
            }
        }
    }

    cout << "set" << endl;
}