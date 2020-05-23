#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int n,now=0,ans=0;
        bool P;
        cin >> n;
        vector<long long int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        if(0<a[0]){
            P = true;
        }else{
            P = false;
        }

        now = a[0];

        for(int i=0;i<n;i++){
            if(P){
                if(a[i]<0){
                    ans += now;
                    now = a[i];
                    P = false;
                }else{
                    now = max(now,a[i]);
                }
            }else{
                if(0<a[i]){
                    ans += now;
                    now = a[i];
                    P = true;
                }else{
                    now = max(now,a[i]);
                }
            }
        }

        ans += now;

        cout << ans << endl;

    }
}