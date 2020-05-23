#include <bits/stdc++.h>

using namespace std;

int main(){
    string S,ss;
    long long int K,ans=0,a=1,b,n=0;
    bool all =true,first = true,kei=false,same;
    cin >> S;
    cin >> K;

    for(int i=1;i<S.size();i++){
        if(S[i] != S[i-1]){
            all = false;
        }
    }

    if(S[0] == S[S.size()-1]){
        same = true;
    }else{
        same = false;
    }

    if(all){
            cout << S.size()*K/2 << endl;
    }else{
        if(same){
            ss = S + S;
            for(int i=0;i<S.size()-1;i++){
                if(S[i] == S[i+1]){
                    a++;
                    if(i == S.size()-2){
                        kei = true;
                        ans += a/2;
                    }
                }else{
                    if(1<a && first){
                        ans += a/2;
                    }else if(1<a){
                        ans += a/2*K;
                    }
                    a = 1;
                    first = false;
                }
            }

            if(kei){
                a = 1;
                for(int i=S.size()-1;;i--){
                    if(ss[i] == ss[i-1]){
                        a++;
                    }else{
                        break;
                    }
                }
                for(int i=S.size()-1;;i++){
                    if(ss[i] == ss[i+1]){
                        a++;
                    }else{
                        break;
                    }
                }
                ans += a/2*(K-1);
            }
        }else{
            for(int i=0;i<S.size()-1;i++){
                if(S[i] == S[i+1]){
                    a++;
                    if(i == S.size()-2){
                        ans += a/2*K;
                    }
                }else{
                    if(1<a){
                        ans += a/2*K;
                    }
                    a = 1;
                }
            }
        }
        cout << ans << endl;
    }
}