#include <bits/stdc++.h>

using namespace std;

bool hantei(int x){
    bool f=true;
    for(int i=pow(x,0.5)+1;2<=i;i--){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long int N,ans=1;
    vector<int> sosu;
    cin >> N;

    for(int i=3;i<=N;i++){
        if(hantei(i)){
            sosu.push_back(i);
        }
    }

    sosu.push_back(2);

    for(int i=0;i<sosu.size();i++){
        int div=sosu[i],done=N,pw=0;
        while(div<=done){
            pw += done/div;
            div *= sosu[i];
        }
        ans *= (pw+1);
        ans %= 1000000007;
    }

    cout << ans << endl;
}