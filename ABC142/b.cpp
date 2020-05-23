#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans =0;
    cin >> N >> K;
    vector<int> h(N);
    for(int i=0;i<N;i++){
        cin >> h[i];
    }

    sort(h.begin(),h.end());

    for(int i=0;i<N;i++){
        if(K<=h[i]){
            ans = N-i;
            break;
        }
        if(i==N-1){
            ans = 0;
        }
    }

    cout << ans << endl;
}