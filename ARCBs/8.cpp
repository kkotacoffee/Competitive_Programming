#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=1;
    cin >> N >> M;
    string n,m;
    cin >> n >> m;
    map<char,int> name,kit;
    for(int i=0;i<N;i++){
        name[n[i]]++;
    }

    for(int i=0;i<M;i++){
        kit[m[i]]++;
    }

    for(int i=0;i<N;i++){
        if(kit[n[i]]==0){
            cout << -1 << endl;
            return 0;
        }else{
            ans = max(ans,(name[n[i]]+kit[n[i]]-1)/kit[n[i]]);
        }
    }

    cout << ans << endl;
}