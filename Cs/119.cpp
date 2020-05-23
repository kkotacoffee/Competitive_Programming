#include <bits/stdc++.h>

using namespace std;

int l[10],N,A,B,C;

int dfs(int n,int a,int b,int c){
    if(n==N){
        if(0<min({a,b,c})){
            return abs(A-a)+abs(B-b)+abs(C-c)-30;
        }else{
            return 1e8;
        }
    }else{
        int ret0 = dfs(n+1,a,b,c);
        int ret1 = dfs(n+1,a+l[n],b,c)+10;
        int ret2 = dfs(n+1,a,b+l[n],c)+10;
        int ret3 = dfs(n+1,a,b,c+l[n])+10;
        return min({ret0,ret1,ret2,ret3});
    }
}

int main(){
    cin >> N >> A >> B >> C;
    for(int i=0;i<N;i++){
        cin >> l[i];
    }

    cout << dfs(0,0,0,0) << endl;
}