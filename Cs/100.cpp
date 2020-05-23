#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    vector<int> a(N,0);

    for(int i=0;i<N;i++){
        cin >> a[i];
    }

for(int i=0;i<N;i++){
    while((a[i]%2)==0){
            a[i] /= 2;
            ans++;
        }
}

    cout << ans << endl;

}