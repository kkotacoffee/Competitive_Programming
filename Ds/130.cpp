#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,sum=0,ans=0,bgn=0,lst=0;
    cin >> N >> K;
    vector<long long int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    sum += a[0];

    while(1){
        if(K<=sum){
            ans += N-lst;
            sum -= a[bgn];
            bgn++;
        }else{
            lst++;
            if(lst==N){
                break;
            }
            sum += a[lst];
        }
    }

    cout << ans << endl;
}