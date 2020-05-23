#include <bits/stdc++.h>

using namespace std;

int main(){
    string X;
    int t=0,s=0,sub=0;
    cin >> X;
    for(int i=0;i<X.size();i++){
        if(X[i]=='S'){
            s++;
        }else{
            if(0<s){
                s--;
                sub += 2;
            }
        }
    }

    cout << X.size()-sub << endl;
}