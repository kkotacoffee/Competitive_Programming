#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=1;
    bool vartical;
    cin >> N;
    vector<string> S(2);

    for(int i=0;i<2;i++){
        cin >> S[i];
    }

    for(int i=0;i<N;i++){

        if(i==0){

            if(S[0][i]==S[1][i]){
                ans *= 3;
                vartical = true;
            }else{
                ans *= 6;
                vartical = false;
                i++;
            }

        }else{

            if(S[0][i]==S[1][i]){

                if(vartical){
                    ans *= 2;
                }else{
                    ans *=1;
                }
                vartical = true;

            }else{

                i++;
                if(vartical){
                    ans *= 2;
                }else{
                    ans *= 3;
                }
                vartical = false;

            }

        }

        ans %= 1000000007;
    }

    cout << ans << endl;
}