#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int ans=0;
    cin >> N;
    vector<int> a(3*N);
    for(int i=0;i<3*N;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<N;i++){
        ans += a[2*i+N];
    }

    cout << ans << endl;;
}