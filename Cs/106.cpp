#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    long long int K,i=0;
    cin >> S;
    cin >> K;
    while(1){
        if(S[i]!='1'){
            cout << S[i] << endl;
            break;
        }else{
            if(i==(K-1)){
                cout << "1" << endl;
                break;
            }else{
                i++;
            }
        }
    }
    return 0;
}