#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans=0;
    priority_queue<long long int> Q;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        Q.push(a);
    }

    for(int i=0;i<M;i++){
        long long int b = Q.top();
        Q.pop();
        b /= 2;
        Q.push(b);
    }

    for(int i=0;i<N;i++){
        ans += Q.top();
        Q.pop();
    }

    cout << ans << endl;
}