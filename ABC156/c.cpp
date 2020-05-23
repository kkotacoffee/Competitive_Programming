#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0,anss=0,avl=0;
    cin >> N;
    vector<int> X(N);
    for(int i=0;i<N;i++){
        cin >> X[i];
        avl += X[i];
    }
    avl /= N;

    sort(X.begin(),X.end());

    for(int i=0;i<N;i++){
        ans += (X[i]-avl)*(X[i]-avl);
    }

    for(int i=0;i<N;i++){
        anss += (X[i]-avl-1)*(X[i]-avl-1);
    }

    cout << min(ans,anss) << endl;
}