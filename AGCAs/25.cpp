#include <bits/stdc++.h>

using namespace std;

int main(){
    string N;
    int ans=0;
    bool ten = true;
    cin >> N;
    for(int i=0;i<N.size();i++){
        ans += (int)N[i] - '0';
    }

    if(ans == 1){
        cout << ans + 9 << endl;
    }else{
        cout << ans << endl;
    }
}