#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,A,B,u=1e9,l=-1;
    cin >> N >> A >> B;
    A -= B;
    vector<long long int> h(N);
    for(int i=0;i<N;i++){
        cin >> h[i];
    }

    while(1<u-l){
        long long int mid = (u+l)/2,ans=0;

        for(int i=0;i<N;i++){
            long long int tmp = h[i] - B*mid;
            if(0<tmp){
                ans += (tmp+A-1)/A;
            }
        }

        if(ans<=mid){
            u = mid;
        }else{
            l = mid;
        }
    }

    cout << u << endl;
}