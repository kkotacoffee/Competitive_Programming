#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<long long int> sum(N,0);
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        sum[a]++;
        sum[b]++;
    }

    for(int i=0;i<N;i++){
        if(sum[i]%2==1){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}