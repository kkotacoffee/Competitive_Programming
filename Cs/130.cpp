#include <bits/stdc++.h>

using namespace std;

int main(){
    float W,H,x,y;
    cin >> W >> H >> x >> y;

    cout << setprecision(35) << W*H/2.000000000<< " ";

    if(x == W/2.000000000 && y == H/2.000000000){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
}