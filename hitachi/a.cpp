#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;

    if(S.size()%2==1){
        cout << "No" << endl;
        return 0;
    }
    for(int i=0;i<S.size();i++){
        if(i%2==0){
            if(S[i]!='h'){
                cout << "No" << endl;
                return 0;
            }
        }else{
             if(S[i]!='i'){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    
    cout << "Yes" << endl;
}