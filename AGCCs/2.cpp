#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,L,ok=-1;
    cin >> N >> L;
    vector<long long int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
        if(L<=a[i]){
            ok = i;
        }
    }

    for(int i=1;i<N;i++){
        if(L<=a[i-1]+a[i]){
            ok = i-1;
            break;
        }
    }

    if(ok==-1){
        cout << "Impossible" << endl;
    }else{
        cout << "Possible" << endl;

        for(int i=0;i<ok;i++){
            cout << i+1 << endl;
        }

        for(int i=N-1;ok<i;i--){
            cout << i << endl;
        }
    }
}