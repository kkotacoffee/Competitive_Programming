#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0,A;
    cin >> N;
    vector<int> a(N,0);
    for(int i=0;i<N;i++){
        cin >> A;
        if(N<A){
            ans++;
        }else{
            a[A-1]++;
        }
    }

    for(int i=0;i<N;i++){
        if(i+1<a[i]){
            ans += a[i]-i-1;
        }else if(a[i]<i+1){
            ans += a[i];
        }
    }

    cout << ans << endl;
}