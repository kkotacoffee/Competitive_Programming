#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ans;
    cin >> n;
    vector<long long int> sum(1000002,0);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        sum[a]++;
        sum[b+1]--;
    }

    ans = sum[0];

    for(int i=1;i<1000002;i++){
        sum[i] += sum[i-1];
        if(ans<sum[i]){
            ans = sum[i];
        }
    }

    cout << ans << endl;
}