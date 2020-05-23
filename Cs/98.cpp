#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=0,N;
    string S;
    cin >> N >> S;
    vector<int> ok(N,0);

    for(int i=1;i<N;i++){
        if(S[i]=='E'){
            ok[0]++;
        }
    }

    for(int i=0;i<N-1;i++){
        if(S[i+1]=='E' && S[i]=='E'){
            ok[i+1] = ok[i]-1;
        }else if(S[i+1]=='W' && S[i]=='W'){
            ok[i+1] = ok[i]+1;
        }else{
            ok[i+1] = ok[i];
        }
    }

    ans = ok[0];

    for(int i=1;i<N;i++){
        ans = min(ans,ok[i]);
    }

    cout << ans << endl;
}