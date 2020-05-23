#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    vector<long long int> A(N);
    vector<vector<long long int>> bit(N,vector<long long int>(100,0));
    map<long long int,long long int> mp;

    for(int i=0;i<N;i++){
        cin >> A[i];
        for(int j=0;0<A[i];j++){
            bit[i][j] = A[i]%2;
            A[i] /= 2;
        }
    }

    int back=0,front=1;

    for(int i=0;i<100;i++){
        mp[i] += bit[0][i];
    }

    while(back!=N){

        bool ok = true;

        for(int i=0;i<100;i++){
            if(2<=mp[i]){
                ok = false;
                break;
            }
        }

        if(ok || back){
            if(ok){
                ans++;
            }
            front++;

            for(int i=0;i<100;i++){
                mp[i] += bit[front][i];
            }

        }else{

            for(int i=0;i<100;i++){
                mp[i] -= bit[back][i];
            }
            back++;

        }

    }

    cout << ans << endl;
}