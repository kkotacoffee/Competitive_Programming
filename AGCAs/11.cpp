#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,C,K,ans=0,t=1,i=1,c=1;
    cin >> N >> C >> K;
    vector<int> T(N);
    for(int i=0;i<N;i++){
        cin >> T[i];
    }

    sort(T.begin(),T.end());

    t=T[0];
    ans++;

    while(i<N){
        if(K<T[i]-t || C==c){
            t=T[i];
            c=1;
            i++;
            ans++;
        }else{
            i++;
            c++;
        }
    }

    cout << ans << endl;
}