#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0,x=0;
    cin >> N;
    vector<int> H(N);
    for(int i=0;i<N;i++){
        cin >> H[i];
    }

    for(int i=1;i<N;i++){
        if(H[i-1]>=H[i]){
            x++;
        }else{
            ans = max(ans,x);
            x=0;
        }
    }

    ans = max(ans,x);

    cout << ans << endl;
}