#include <bits/stdc++.h>

using namespace std;

int main(){
    string S,x;
    double ans=0;
    int count=0,rop=0,now=0;
    cin >> S;
    x.push_back(S[0]);

    while(count!=pow(2,S.size()-1)){
        now = count;
        for(int i=1;i<S.size();i++){
            if(now&1 == 1){
                x.push_back(S[i]);
            }else{
                ans += stod(x);
                x.clear();
                x.push_back(S[i]);
            }
            now >>= 1;
        }
        ans += stod(x);
        x.clear();
        x.push_back(S[0]);
        count++;
    }

    cout << setprecision(S.size()+1) << ans << endl;
}