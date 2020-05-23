#include <bits/stdc++.h>

using namespace std;

int main(){
    string c;
    cin >> c;

    for(int i=0;i<c.size()-1;i++){
        if(c[i]!=c[i+1]){
            swap(c[i],c[i+1]);
            cout << c << endl;
            return 0;
        }
    }

    if(c.size()==1){
        if(c[0]=='a'){
            cout << "NO" << endl;
        }else{
            cout << c[0]-'a' << c[0]-1 << endl;
        }
    }
}