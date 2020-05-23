#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,a[5],ans=0,m;
    cin >> N >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    ans += (N+a[0]-1) /a[0] + 4;
    m=a[0];
    for(int i=1;i<5;i++){
        if(a[i]<m){
            ans += (N+a[i]-1)/a[i] - (N+m-1)/m;
            m= a[i];
        }
    }

    cout << ans << endl;
}