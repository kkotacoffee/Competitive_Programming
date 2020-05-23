#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int x,y,ans = 0;
    cin >> x >> y;
    if(abs(y)<abs(x)){
        ans += max(abs(y),abs(x)) - min(abs(y),abs(x));
        if(0<x){
            ans++;
        }
        if(0<y){
            ans++;
        }
    }else{
        ans += max(abs(y),abs(x)) - min(abs(y),abs(x));
        if(x<0){
        ans++;
        }

        if(y<0){
        ans++;
        }
    }

    cout << ans <<endl;

}