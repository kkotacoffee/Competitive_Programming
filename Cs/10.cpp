#include <bits/stdc++.h>

using namespace std;

int main(){
    double ax,ay,bx,by,T,V,n,x,y;
    bool can = false;
    cin >> ax >> ay >> bx >> by >> T >> V;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(pow(pow(x-ax,2)+pow(y-ay,2),0.5)+pow(pow(bx-x,2)+pow(by-y,2),0.5)<=T*V){
            can = true;
        }
    }

    if(can){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}