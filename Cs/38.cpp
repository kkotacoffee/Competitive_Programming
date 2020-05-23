#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,up=1;
    long long int ans=0;
    cin >> N;
    vector<long long int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(int i=1;i<N;i++){
        if(a[i-1]<a[i]){
            up++;
        }else{
            if(up!=1){
                ans += up*(up-1)/2;
                up = 1;
            }
        }
    }

    if(up!=1){
        ans += up*(up-1)/2;
        up = 1;
    }

    cout << ans+N << endl;
}