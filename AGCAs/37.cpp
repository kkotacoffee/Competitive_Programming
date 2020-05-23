#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string S;
    int f=0;
    long long int ans=1;
    cin >> S;
    for(int i=0;i<S.size()-1;i++){
        if(f==1){
            ans++;
            f=0;
        }
        else if(S[i] == S[i+1] && i==S.size()-2){
            i++;
        }
        else if(S[i] == S[i+1]){
            ans++;
            i++;
            f = 1;
        }else{
            ans++;
            f=0;
        }
    }

    cout << ans << endl;
}