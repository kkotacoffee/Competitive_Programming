#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    bool high=false;
    cin >> N;
    vector<int> h(N),m;
    for(int i=0;i<N;i++){
        cin >> h[i];
    }

    m=h;
    sort(m.begin(),m.end());

    for(int i=1;i<101;i++){
        for(int j=0;j<N;j++){
            if(h[j]<i && high){
                high = false;
            }else if(i<=h[j] && !high){
                ans++;
                high = true;
            }
        }
        high = false;
        if(m.back()==i){
            break;
        }
    }

    cout << ans << endl;
}