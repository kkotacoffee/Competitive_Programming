#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,top;
    long long int ans=0;
    cin >> N;
    string S;
    cin >> S;

    for(int i=1;i<10;i++){
        if(S[0]-'0'==i){
            top = i;
        }
    }

    if(S.size()==1){
        cout << (S[0]-'0') << endl;
    }else if(N==1){
        cout << top << endl;
    }else if(N==2){
        for(int i=1;i<S.size();i++){
            ans += top*(S[j]-'0')+(S.size()-2)*9;
        }
        cout << ans << endl;
    }else{
        for(int i=1;i<S.size();i++){
            for(int j=i+1;j<S.size();j++){
                ans += (S[i]-'0')*(S[j]-'0')*top;
            }
        }
        cout << ans << endl;
    }
}