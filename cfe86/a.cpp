#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(0<t){
        long long int x,y,a,b;
        cin >> x >> y;
        cin >> a >> b;
        if(a*2<b){
            cout << x*a+y*a << endl;
        }else{
            cout << min(x,y)*b+(max(x,y)-min(x,y))*a << endl; 
        }
        t--;
    }
}