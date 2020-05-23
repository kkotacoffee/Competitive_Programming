#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> a(4,0);
    for(int i=0;i<S.size();i++){
        if(S[i]=='N'){
            a[0]++;
        }else if(S[i]=='W'){
            a[1]++;
        }else if(S[i]=='S'){
            a[2]++;
        }else{
            a[3]++;
        }
    }

    if((0==a[0])==(0==a[2]) && (0==a[1])==(0==a[3])){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}