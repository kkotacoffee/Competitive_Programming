#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,now,ans=2,tmp=1,start;
    bool up;
    cin >> N;

    if(N==1){
        cout << 1 << endl;
        return 0;
    }

    vector<long long int> h(N);
    for(int i=0;i<N;i++){
        cin >> h[i];
    }

    now = h[1];
    start = 0;

    if(h[0]<h[1]){
        up = true;
    }else{
        up = false;
    }

    for(int i=1;i<N-1;i++){

        if(up){
            if(h[i+1]<h[i]){
                up = false;
            }
        }else{
            if(h[i]<h[i+1]){
                ans = max(ans,1+i-start);
                start = i;
                up = true;
            }
        }
    }

    ans = max(ans,N-start);

    cout << ans << endl;
}