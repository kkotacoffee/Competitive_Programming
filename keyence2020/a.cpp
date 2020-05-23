#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,N,sum=0;
    cin >> H >> W >> N;

    for(int i=0;i<min(H,W);i++){
        sum += max(H,W);
        if(N<=sum){
            cout << i+1 << endl;
            return 0;
        }
    }
}