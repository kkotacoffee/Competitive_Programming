#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans=0,pp=0;
    cin >> N >> M;

    vector<long long int> p(M),ac(N,0),pena(N,0);
    vector<string> S(M);

    for(int i=0;i<M;i++){
        cin >> p[i] >> S[i];
        p[i]--;
        if(ac[p[i]]==0 && S[i]=="AC"){
            ac[p[i]] = 1;
        }else if(ac[p[i]]==0 && S[i] == "WA"){
            pena[p[i]]++;
        }
    }

    for(int i=0;i<N;i++){
        if(ac[i]==1){
            ans++;
            pp += pena[i];
        }
    }

    cout << ans << " " << pp << endl;
}