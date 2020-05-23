#include <bits/stdc++.h>

using namespace std;

int N;

int dfs(string S, int n){
    if(n==N){
        cout << S << endl;
    }else{
        dfs(S+'a',n+1);
        dfs(S+'b',n+1);
        dfs(S+'c',n+1);
    }
    return 0;
}

int main(){
    cin >> N;
    dfs("",0);
}