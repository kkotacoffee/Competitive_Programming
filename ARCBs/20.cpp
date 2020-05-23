#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c,ans;
    cin >> n >> c;
    vector<int> a(n);
    ans = n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            int x=0;

            if(i==j){
                continue;
            }

            for(int k=0;k<n;k++){
                if(k%2==0){
                    if(i!=a[k]){
                        x++;
                    }
                }else{
                    if(j!=a[k]){
                        x++;
                    }
                }
            }
            ans = min(ans,x);
        }
    }

    cout << ans*c << endl;
}