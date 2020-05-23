#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> a(M);
    for(int i=0;i<M;i++){
        cin >> a[i];
    }
    vector<bool> yet(N,true);

    for(int i=0;i<M;i++){
        if(yet[a[M-1-i]]){
            cout << a[M-1-i] << endl;
            yet[a[M-i-1]] = false;
        }
    }

    for(int i=0;i<N;i++){
        if(yet[i+1]){
            cout << i+1 << endl;
        }
    }
}