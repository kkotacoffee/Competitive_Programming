#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,C;
    cin >> N >> C;
    vector<long long int> a(N);
    vector<vector<long long int>> zahyo(C);

    for(int i=0;i<N;i++){
        cin >> a[i];
        a[i]--;
        zahyo[a[i]].push_back(i);
    }

    for(int i=0;i<C;i++){
        long long int sub = 0;
        for(int j=0;j<zahyo[i].size();j++){
            
            if(j==0){
                sub += (zahyo[i][j])*(zahyo[i][j]-1)/2;
            }

            if(j==zahyo[i].size()-1){
                sub += (N-zahyo[i][j]-1)*(N-zahyo[i][j]-2)/2;
            }
            
            if(0<j){
                sub += (zahyo[i][j]-zahyo[i][j-1]-1)*(zahyo[i][j]-zahyo[i][j-1]-2)/2;
            }
        }

        cout << N*(N-1)/2 - sub + zahyo[i].size() << endl;
    }
}