#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,mx=0,mn;
    cin >> N;
    vector<long long int> d(N),sum(N+1);
    sum[0] = 0;
    for(int i=0;i<N;i++){
        cin >> d[i];
        mx += d[i];
    }

    mn = mx;

    for(int i=0;i<N;i++){
        sum[i+1] = sum[i] + d[i];
    }

    for(int i=0;i<=N;i++){
        for(int j=i;j<=N;j++){
            long long int a = sum[i], b = sum[j]-sum[i], c = mx-sum[j];
            if(abs(a-b)<=c && c<=a+b){
                mn = 0;
                break;
            }else{
                mn = min({mn,abs(a-b-c),abs(b-a-c),abs(c-a-b),abs(a+b-c),abs(a+c-b),abs(b+c-a)});
            }
        }
    }

    cout << mx << endl;
    cout << mn << endl;
}