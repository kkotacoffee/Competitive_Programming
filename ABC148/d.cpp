#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,now=1;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(int i=0;i<N;i++){
        if(a[i]==now){
            now++;
        }
    }

    if(now==1){
        cout << -1 << endl;
    }else{
        cout << N-now+1 << endl;
    }
}