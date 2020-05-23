#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,ans=0;
    cin >> N >> M;
    vector<int> ab(N,1000000);
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        ab[a] = min(ab[a],b);
    }

    for(int i=0;i<N;i++){
        cout << i << endl;
        if(ab[i]!=1000000){
            ans++;
            i = ab[i]-1;
        }
    }

    cout << ans << endl;
}