#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int x, long long int y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}

int main(){
    long long int ans=0,tmp;
    int N,now=0;
    cin >> N;

    vector<long long int> x(N),y(N),P,Q;
    map<pair<long long int,long long int>,long long int> mp;

    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }

            long long int p,q,pp,qq;
            p = x[j]-x[i];
            q = y[j]-y[i];
            pp=p;
            qq=q;

            P.push_back(pp);
            Q.push_back(qq);

            mp[{pp,qq}]++;
        }
    }

    for(int i=0;i<N*(N-1)/2;i++){
        ans = max(ans,mp[{P[i],Q[i]}]);
    }

    cout << N-ans << endl;
}