#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a=0,b=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int aa,bb;
        cin >> aa >> bb;
        if(aa<bb){
            b += aa + bb;
        }else if(bb<aa){
            a += aa + bb;
        }else{
            a += aa;
            b += bb;
        }
    }
    cout << a << " " << b << endl;
}