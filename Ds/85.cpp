#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int  N,H,ans=0;
    cin >> N >> H;
    vector<int> a(N),b(N);
    for(int i=0;i<N;i++){
        cin >> a[i] >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=N-1;0<=i;i--){
        if(b[i]>a[N-1]){
            H -= b[i];
            ans++;
            if(H<=0){
                cout << N-i << endl;
                return 0;
            }
        }
    }

    ans += (H+a[N-1]-1)/a[N-1];

    cout << ans << endl;
}