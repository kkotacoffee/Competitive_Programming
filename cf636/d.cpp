#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int n,k,high,low,ans=1e9;

        cin >> n >> k;

        vector<long long int> a(n),sub(2*k+1,0),imos(2*k+2,0);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n/2;i++){
            imos[max(a[i],a[n-i-1])+k+1]--;
            imos[min(a[i],a[n-i-1])+1]++;
            sub[a[i]+a[n-i-1]]++;
        }

        for(int i=2;i<2*k+1;i++){
            imos[i] += imos[i-1];
            ans = min(ans,n-imos[i]-sub[i]);
        }

        cout << ans << endl;
    }
}
