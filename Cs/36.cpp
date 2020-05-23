#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,now=0;
    cin >> N;
    vector<int> a(N),b;
    map<int,int> mp;
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    b = a;

    sort(a.begin(),a.end());

    mp[a[0]] = now;
    now++;

    for(int i=1;i<N;i++){
        if(a[i-1]!=a[i]){
            mp[a[i]] = now++;
        }
    }

    for(int i=0;i<N;i++){
        cout << mp[b[i]] << endl;
    }
}