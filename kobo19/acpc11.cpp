#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long int n,ans,sum;
        cin >> n;
        vector<long long int> L(n),Lsum(n);
        for(int j=0;j<n;j++){
            cin >> L[j];
        }

        Lsum[0] = L[0];

        for(int j=1;j<n;j++){
            Lsum[j] = Lsum[j-1]+L[j];
        }

        sum = Lsum[n-1];
        ans = Lsum[n-1]-L[0];

        for(int j=0;j<n-1;j++){
            ans = min(ans,2*min(Lsum[j],sum-Lsum[j+1])+max(Lsum[j],sum-Lsum[j+1]));
        }

        ans = min(ans,sum-L[n-1]);

        cout << ans << endl;
    }
}