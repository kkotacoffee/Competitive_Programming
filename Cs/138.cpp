#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<float> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    
    for(int i=0;i<N-1;i++){
        v[i+1] = (v[i+1]+v[i])/2;
    }

    cout << setprecision(9) << v[N-1] << endl;
}