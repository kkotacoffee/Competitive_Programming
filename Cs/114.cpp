#include <bits/stdc++.h>

using namespace std;

long long ans=0,N;

long long dfs(long long n,int san,int go,int nana){
    if(N<n){
        return 0;
    }else{
        if(san&&go&&nana){
            ans++;
        }
        dfs(n*10+3,1,go,nana);
        dfs(n*10+5,san,1,nana);
        dfs(n*10+7,san,go,1);
    }
    return 0;
}

int main(){
    cin >> N;
    dfs(0,0,0,0);
    cout << ans << endl;
}