#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    vector<vector<long long int>> xy(N,vector<long long int> (2));

    for(int i=0;i<N;i++){
        cin >> xy[i][0] >> xy[i][1];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                long long int sum = abs((xy[i][0]-xy[k][0])*(xy[j][1]-xy[k][1])-(xy[j][0]-xy[k][0])*(xy[i][1]-xy[k][1]));
                bool line = ()
                if(sum%2==0 && !same && ){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}