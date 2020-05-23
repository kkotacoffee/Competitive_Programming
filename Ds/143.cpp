#include <bits/stdc++.h>

using namespace std;

vector<long long int> L;

long long int binarysearch(long long int lb,long long int ub,long long int X){
    while(ub-lb>1){
        long long int mid = (L[lb]+L[ub])/2;
        if(mid<X){
            ub = mid;
        }else{
            lb = mid;
        }
    }
    return ub;
}

int main(){
    int N;
    long long int ans=0;
    L.resize(N);
    for(int i=0;i<N;i++){
        cin >> L[i];
    }

    sort(L.begin(),L.end());

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            ans += binarysearch(j,N-1,L[i]+L[j]);
        }
    }
    cout << ans << endl;
}