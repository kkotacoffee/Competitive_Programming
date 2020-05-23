#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,ans=0;
    cin >> x >> y;
    if(x==1){
        ans += 300000;
    }else if(x==2){
        ans += 200000;
    }else if(x==3){
        ans += 100000;
    }

    if(y==1){
        ans += 300000;
    }else if(y==2){
        ans += 200000;
    }else if(y==3){
        ans += 100000;
    }

    if(x==1 && y==1){
        ans += 400000;
    }

    cout << ans << endl;
}