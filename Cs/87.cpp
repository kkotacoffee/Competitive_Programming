#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,ans=0,sum=0;
    cin >> N;
    vector<int> a(N),b(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
        ans += a[i];
    }
 
    for(int i=0;i<N;i++){
        cin >> b[i];
    }
 
    ans += b[N-1];
    sum = ans;
 
    for(int i=N-1;0<i;i--){
        sum -= a[i];
        sum += b[i-1];
        ans = max(ans,sum);
    }
 
    cout << ans << endl;
 
}