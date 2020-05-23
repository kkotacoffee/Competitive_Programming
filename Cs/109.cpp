#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
  return y ? gcd(y, x%y) : x;
}

int main(){
    int N,X,ls=1000000000,ans;
    cin >> N >> X;
    vector<int> x(N);
    for(int i=0;i<N;i++){
        cin >> x[i];
        if(ls>abs(X-x[i])){
            ls = abs(X-x[i]);
        }
    }

    sort(x.begin(),x.end());

    ans = ls;

    for(int i=0;i<N-1;i++){
        ans = gcd(ans,x[i+1]-x[i]);
    }

    cout << ans << endl;
}