#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,x,ans=0;
    cin >> N >> x;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(int i=0;i<N-1;i++){
        if(x<a[i]+a[i+1]){
            ans += a[i]+a[i+1]-x;
            if(x<a[i]){
                a[i+1]=0;
                a[i] -= x-a[i+1];
            }else{
                a[i+1] -= a[i]+a[i+1]-x;
            }
        }
    }

    cout << ans;
}