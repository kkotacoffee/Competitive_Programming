#include <bits/stdc++.h>

using namespace std;

int main(){
    string S,T;
    cin >> S;
    cin >> T;
    unordered_map<char,char> mp1,mp2;
    for(int i=0;i<S.size();i++){
        if(mp1[S[i]]==NULL){
            mp1[S[i]] = T[i];
        }

        if(mp2[T[i]]==NULL){
            mp2[T[i]] = S[i];
        }
        
        if(mp1[S[i]]!=T[i] || mp2[T[i]]!=S[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}