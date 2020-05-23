#include <bits/stdc++.h>

using namespace std;

bool sosuu(long long int x){
    if(x==0){
        return false;
    }
    for(int i=2;i<=pow(x,0.5);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int N,ans=1;
    cin >> N;
    vector<long long int>a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
        while(a[i]%2!=1){
            a[i] /=2;
        }
    }

    sort(a.begin(),a.end());

    for(int i=1;i<N;i++){
        if(a[i]!=a[i-1]){
            ans++;
        }
    }

    cout << ans << endl;
}