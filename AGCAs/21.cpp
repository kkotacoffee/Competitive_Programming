#include <bits/stdc++.h>

using namespace std;

int main(){
    string N;
    cin >> N;
    int sz = N.size();
    for(int i=0;i<N.size();i++){
        if(i!=0 && N[i]!='9'){
            cout << N[0]-'0' + 9*(sz-1) - 1 << endl;
            return 0; 
        }
    }

    cout << N[0]-'0' + 9*(sz-1) << endl;
}