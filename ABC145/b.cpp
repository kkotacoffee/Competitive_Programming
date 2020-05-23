#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    bool flag = true;
    string S;
    cin >> N;
    cin >> S;
    for(int i=0;i<N/2;i++){
        if(S[i]!=S[N/2+i]){
            flag = false;
        }
    }

    if(flag && N%2!=1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}