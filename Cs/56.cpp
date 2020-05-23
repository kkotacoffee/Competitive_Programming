#include <bits/stdc++.h>

using namespace std;

int main(){
    int X,i=0,ans=0,sum=0;
    cin >> X;
    while(sum<X){
        i++;
        sum += i;
        ans++;
    }
    cout << ans;
}