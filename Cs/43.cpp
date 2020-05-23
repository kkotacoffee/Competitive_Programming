#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,avl,ans=0,anss=0;
    cin >> N;
    vector<int> a(N);
    cin >> avl;
    a[0] = avl;
    for(int i=1;i<N;i++){
        cin >> a[i];
        avl += a[i];
    }
    avl /= N;
    for(int i=0;i<N;i++){
        ans += abs(a[i]-avl) * abs(a[i]-avl);
    }
    for(int i=0;i<N;i++){
        anss += abs(a[i]-avl-1) * abs(a[i]-avl-1);
    }
    cout << min(ans,anss);
}