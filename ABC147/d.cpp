#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int ans=0,now=1,x=0,n,add;
    cin >> N;
    n = N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        A[i] <<= 1;
    }

    for(int i=0;i<61;i++){
        x=0;
        for(int j=0;j<N;j++){
            A[j] >>= 1;
            if((A[j]&1) == 1){
                x++;
            }
        }
        add = x*(n-x);
        ans %= 1000000007;
        for(int j=0;j<i;j++){
            add *= 2;
            add %= 1000000007;
        }

        ans += add;
    }

    ans %= 1000000007;

    cout << ans << endl;
}