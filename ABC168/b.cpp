#include <bits/stdc++.h>

using namespace std;

int main(){
    int K;
    cin >> K;
    string S;
    cin >> S;
    
    if(S.size()<=K){
        cout << S << endl;
    }else{
        cout << S.substr(0,K) << "..." << endl;
    }
}