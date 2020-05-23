#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int x,ans;
    cin >> x;
    ans = x/11*2;
    if(x%11==0){
    }else if(x%11 < 7){
        ans++;
    }else{
        ans +=2;
    }
    cout << ans;
}