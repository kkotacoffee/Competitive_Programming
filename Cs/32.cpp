#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K;
    bool zero = false;
    cin >> N >> K;
    vector<long long int> s(N); 
    for(int i=0;i<N;i++){
        cin >> s[i];
    }

    long long int b=0,e=0,now=s[0],ans=0;

    if(s[0]==0){
        zero = true;
    }

    if(s[0]<=K){
        ans = 1;
    }

    while(e!=N-1){
        if(s[e+1]==0){
            zero = true;
            break;
        }

        if(now*s[e+1]<=K){
            e++;
            now *= s[e];
            ans = max(ans,e-b+1);
        }else{
            if(b==e){
                b++;
                e++;
                now = s[e];
            }else{
                now /= s[b];
                b++;
            }
        }
    }

    if(zero){
        cout << N << endl;
    }else{
        if(K==0){
            cout << 0 << endl;
        }else{
            cout << ans << endl;
        }
    }
}