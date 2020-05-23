#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<long long int> sum(N+1,0);
    for(int i=0;i<Q;i++){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        sum[l]++;
        sum[r+1]--;
    }


    for(int i=1;i<N;i++){
        sum[i] += sum[i-1];
    }

    for(int i=0;i<N;i++){
        if(sum[i]%2==0){
            cout << 0;
        }else{
            cout << 1;
        }
    }

    cout << endl;
}