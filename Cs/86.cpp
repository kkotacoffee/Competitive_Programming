#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,t,x,y,bt=0,bx=0,by=0;
    bool ans = true;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> t >> x >> y;
        if(t-bt < abs(x-bx) + abs(y-by) || abs(abs(x-bx)+abs(y-by))%2 != (t-bt)%2){
            ans = false;
            break;
        }
        bt = t;
        bx = x;
        by = y;
    }

    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}