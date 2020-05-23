#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,R,ans=0;
    bool first = true;
    cin >> N >> R;
    string S;
    cin >> S;

    for(int i=N-1;0<=i;i--){
        if(S[i]=='.'){
            if(first){
                ans += max(0,i-R+1);
                first = false;
            }
            ans++;
            i -= (R-1);
        }
    }

    cout << ans << endl;

}