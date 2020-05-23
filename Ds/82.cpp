#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int x,y,xsum=0,ysum=0,xx=1,yy=0;
    cin >> s;
    cin >> x >> y;
    bool xxx = true;

    for(int i=0;i<s.size();i++){
        if(s[i]=='T'){
            if(xxx){
                xxx = false;
                yy++;
            }else{
                xxx = true;
                xx++;
            }
        }else{
            if(xxx){
                xsum++;
            }else{
                ysum++;
            }
        }
    }

    if( ( (xsum==abs(x) && xx==1) || (xsum%2 == abs(x)%2 && abs(x)<=xsum && 3<=xx) ) && ( (ysum==abs(y) && yy==1) || (ysum%2==abs(y)%2 && abs(y)<=ysum && 2<=yy) ) ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}