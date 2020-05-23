#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=1,a,b,f=0;
    cin >> N;
    cin >> a;
    for(int i=1;i<N;i++){
        cin >> b;
        if(b<a){
            f++;
            if(f%2==0){
            ans++;
        }
        }else if(b==a){
            ans++;
        }
        a=b;
    }
    cout << ans << endl;

}