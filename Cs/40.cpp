#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N),sum(N,0);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    sum[1] = abs(a[1]-a[0]);

    for(int i=2;i<N;i++){
        sum[i] = min(sum[i-1]+abs(a[i]-a[i-1]),sum[i-2]+abs(a[i]-a[i-2]));
    }

    cout << sum[N-1] << endl;
}