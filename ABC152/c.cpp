#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=1,mx;
    cin >> N;
    vector<int> P(N);
    for(int i=0;i<N;i++){
        cin >> P[i];
    }

    mx = P[0];

    for(int i=1;i<N;i++){
        if(mx>=P[i]){
            mx = min(P[i],mx);
            ans++;
        }
    }

    cout << ans << endl;
}