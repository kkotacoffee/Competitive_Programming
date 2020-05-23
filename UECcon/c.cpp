#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,ans = 1;
    int now=1,s=2,w=4,e=3,n=5,ur=6;
    cin >> a;
    for(int i=0;i<a;i++){
        string S;
        int on;
        cin >> S;
        if(S == "North"){
            ans += s;
            on = n;
            n = now;
            now = s;
            s = ur;
            ur = on;
        }else if(S == "East"){
            ans += w;
            on = e;
            e = now;
            now = w;
            w = ur;
            ur = on;
        }else if(S == "West"){
            ans += e;
            on = w;
            w = now;
            now = e;
            e = ur;
            ur = on;
        }else if(S == "South"){
            ans += n;
            on = s;
            s = now;
            now = n;
            n = ur;
            ur = on;
        }else if(S == "Left"){
            ans += now;
            on = e;
            e = s;
            s = w;
            w = n;
            n = on;
        }else{
            ans += now;
            on = s;
            s = e;
            e = n;
            n = w;
            w = on;
        }
    }
    cout << ans << endl;
}