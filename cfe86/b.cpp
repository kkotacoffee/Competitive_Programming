#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(0<t){
        string S,ss;
        cin >> S;

        ss = S;
        sort(ss.begin(),ss.end());

        if(S.size()<=2 || ss[0]==ss.back()){
            cout << S;
        }else{
            cout << S[0];
            for(int i=1;i<S.size();i++){
                if(S[i-1]==S[i]){
                    if(S[i]=='0'){
                        cout << 1;
                    }else{
                        cout << 0;
                    }
                }
                cout << S[i];
            }
        }

        cout << endl;

        t--;
    }
}