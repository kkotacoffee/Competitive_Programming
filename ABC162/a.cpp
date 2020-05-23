#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='7'){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}