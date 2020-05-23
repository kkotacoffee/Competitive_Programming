#include <bits/stdc++.h>

using namespace std;

int te[100000][3];

int main(){
    int N;
    cin >> N;
    vector<int> R(N),H(N),ans(100001,0);

    for(int i=0;i<N;i++){
        cin >> R[i] >> H[i];
        R[i]--;
        H[i]--;
        te[R[i]][H[i]]++;
        ans[R[i]]++;
    }

    for(int i=1;i<100001;i++){
        ans[i] += ans[i-1];
    }

    for(int i=0;i<N;i++){
        if(H[i]==0){
            cout << ans[R[i]-1]+te[R[i]][1] << " " << N-ans[R[i]]+te[R[i]][2] << " " << te[R[i]][0]-1 << endl;
        }else if(H[i]==1){
            cout << ans[R[i]-1]+te[R[i]][2] << " " << N-ans[R[i]]+te[R[i]][0] << " " << te[R[i]][1]-1 << endl;
        }else{
            cout << ans[R[i]-1]+te[R[i]][0] << " " << N-ans[R[i]]+te[R[i]][1] << " " << te[R[i]][2]-1 << endl;
        }
    }
}