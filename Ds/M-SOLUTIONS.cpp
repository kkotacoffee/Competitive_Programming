#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;

int main(){
    long long int N,sum=0;
    cin >> N;
    vector<pair<long long int,long long int>> ab(N,{0,0});
    vector<long long int> a(N-1),b(N-1),c(N),ans(N);
    for(int i=0;i<N-1;i++){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        ab[a[i]].first++;
        ab[b[i]].first++;
    }

    for(int i=0;i<N;i++){
        cin >> c[i];
        ab[i].second = i;
    }

    sort(ab.begin(),ab.end());
    sort(c.begin(),c.end());

    priority_queue<pair<long long int,long long int>> Q;

    for(int i=0;i<N;i++){
        
    }

    for(int i=0;i<N-1;i++){
        sum += min(ans[a[i]],ans[b[i]]);
    }

    cout << sum << endl;

    for(int i=0;i<N;i++){
        if(i==0){
            cout << ans[i];
        }else{
            cout << " " << ans[i];
        }
    }

    cout << endl;
}