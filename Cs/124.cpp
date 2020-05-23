#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    int i=0,zero=0,one=0;
    while(i!=S.size()){
        if(S[i]!='0' && i%2==0){
            zero++;
        }else if(S[i] != '1' && i%2==0){
            one++;
        }else if(S[i] != '1' && i%2==1){
            zero++;
        }if(S[i] != '0' && i%2==1){
            one++;
        }
        i++;
    }

    cout << min(zero,one) << endl;
}