#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,T,a,b,ans=0;
    cin >> N >> T;
    cin >> a >> b;

    if(b-a<T){
        ans += b-a;
    }else{
        ans += T;
    }

    for(int i=2;i<N;i++){
        a = b;
        cin >> b;
        if(b-a<T){
            ans += b-a;
        }else{
            ans += T;
        }
    }
    ans += T;
    if(N==1){
        cout << T;
    }else{
        cout << ans;
    }
}