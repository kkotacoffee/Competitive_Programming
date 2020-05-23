#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,BB=0,ans=0,x=0,now;
    cin >> N;
    vector<vector<int>> vecx(N),vecy(N);
    for(int i=0;i<N;i++){
        int A,x,y;
        cin >> A;
        for(int i=0;i<A;i++){
            cin >> x >> y;
            x--;
            vecx[i].push_back(x);
            vecy[i].push_back(y);
        }
    }

    cout << rand(N) << endl; 
}