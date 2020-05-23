#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans=0;
    cin >> N >> K;
    vector<int> sn(N,0);
    for(int i=0;i<K;i++){
        int d;
        cin >> d;
        for(int j=0;j<d;j++){
            int A;
            cin >> A;
            sn[A-1]++;
        }
    }

    for(int i=0;i<N;i++){
        if(sn[i]==0){
            ans++;
        }
    }

    cout << ans << endl;
}