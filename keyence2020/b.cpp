#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    long long int now = 0;
    cin >> N;
    vector<pair<long long int, long long int>> XL(N);
    for(int i=0;i<N;i++){
        long long int x,l;
        cin >> x >> l;
        XL[i].first = x+l;
        XL[i].second = x-l;
    }

    sort(XL.begin(),XL.end());

    now = XL[0].first;
    ans++;

    for(int i=1;i<N;i++){
        if(now<=XL[i].second){
            now = XL[i].first;
            ans++;
        }
    }

    cout << ans << endl;

}