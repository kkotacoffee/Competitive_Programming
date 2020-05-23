#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,nn;
    map<char,char> mp;
    cin >> n;
    for(int i=0;i<n;i++){
        char a,b;
        cin >> a >> b;
        mp[a] = b;
    }
    cin >> nn;
    for(int i=0;i<nn;i++){
        char c;
        cin >> c;
        if(mp[c] == NULL){
            cout << c;
        }else{
            cout << mp[c];
        }
    }
    cout << endl;
}