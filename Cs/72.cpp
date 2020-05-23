#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0,sum=0,a;
    cin >> N;
    vector<int> vec(100001,0);
    for(int i=0;i<N;i++){
        cin >> a;
        vec[a]++;
    }

    for(int i=1;i<vec.size()-1;i++){
        ans = max(ans,vec[i-1]+vec[i]+vec[i+1]);
    }

    cout << ans << endl;
}