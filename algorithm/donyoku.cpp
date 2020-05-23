#include <bits/stdc++.h>

using namespace std;

int S[100],T[100];
pair<int,int> itv[100];

int main(){

    for(int i=0;i<10;i++){
        cin >> S[i] >> T[i];
    }

    for(int i=0;i<10;i++){
        itv[i].first =T[i];
        itv[i].second = S[i];
    }

    sort(itv,itv+10);

    int ans=0, t=0;

    for(int i=0;i<10;i++){
        if(t<itv[i].second){
            ans++;
            t=itv[i].first;
        }
    }

    cout << ans;
}