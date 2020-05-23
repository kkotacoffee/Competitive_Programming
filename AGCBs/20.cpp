#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int K,mn=2,mx=3;
    cin >> K;
    vector<long long int> A(K);
    for(int i=0;i<K;i++){
        cin >> A[K-1-i];
    }

    if(A[0]!=2){
        cout << -1 << endl;
        return 0;
    }

    for(int i=1;i<K;i++){
        if(0<mx/A[i] - mn/A[i]){
            mn = mn + A[i] - mn%A[i];
            mx = mn + A[i] - 1;
        }else{
            if(mn%A[i]==0){
                mn = mn;
                mx = mn + A[i] - 1;
            }else if(mx%A[i]==0){
                mn = mx;
                mx = mn + A[i] - 1;
            }else{
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << mn << " " << mx << endl;
}