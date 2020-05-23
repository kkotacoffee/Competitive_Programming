#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    vector<int> B(N-1);

    for(int i=0;i<N-1;i++){
        cin >> B[i];
    }

    ans += B[0];
    ans += B.back();

    for(int i=0;i<N-2;i++){
        ans += min(B[i],B[i+1]);
    }

    cout << ans << endl;
}