#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    int z=0,o=0;

    cin >> S;

    for(int i=0;i<S.size();i++){
        if(S[i] == '0'){
            z++;
        }else{
            o++;
        }
    }

    cout << min(z,o) * 2 << endl;
}