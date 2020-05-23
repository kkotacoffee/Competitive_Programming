#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,R=0,G=0,B=0,ans=0;
    cin >> N;
    vector<long long int> sumg(N),sumr(N),sumb(N);
    string S;
    cin >> S;

    if(S[0]=='R'){
        sumr[0] = 1;
        sumg[0] = 0;
        sumb[0] = 0;
        R++;
    }else if(S[0]=='G'){
        sumr[0] = 0;
        sumg[0] = 1;
        sumb[0] = 0;
        G++;
    }else{
        sumr[0] = 0;
        sumg[0] = 0;
        sumb[0] = 1;
        B++;
    }

    for(int i=1;i<N;i++){
        if(S[i]=='R'){
            sumr[i] = sumr[i-1]+1;
            sumg[i] = sumg[i-1];
            sumb[i] = sumb[i-1];
            R++;
        }else if(S[i]=='G'){
            sumr[i] = sumr[i-1];
            sumg[i] = sumg[i-1]+1;
            sumb[i] = sumb[i-1];
            G++;
        }else{
            sumr[i] = sumr[i-1];
            sumg[i] = sumg[i-1];
            sumb[i] = sumb[i-1]+1;
            B++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(S[i]=='R' && S[j]=='G'){
                if(j+(j-i)<N && S[j+(j-i)]=='B'){
                    ans += B-sumb[j]-1;
                }else{
                    ans += B-sumb[j];
                }
            }else if(S[i]=='R' && S[j]=='B'){
                if(j+(j-i)<N && S[j+(j-i)]=='G'){
                    ans += G-sumg[j]-1;
                }else{
                    ans += G-sumg[j];
                }
            }else if(S[i]=='B' && S[j]=='R'){
                if(j+(j-i)<N && S[j+(j-i)]=='G'){
                    ans += G-sumg[j]-1;
                }else{
                    ans += G-sumg[j];
                }
            }else if(S[i]=='B' && S[j]=='G'){
                if(j+(j-i)<N && S[j+(j-i)]=='R'){
                    ans += R-sumr[j]-1;
                }else{
                    ans += R-sumr[j];
                }
            }else if(S[i]=='G' && S[j]=='R'){
                if(j+(j-i)<N && S[j+(j-i)]=='B'){
                    ans += B-sumb[j]-1;
                }else{
                    ans += B-sumb[j];
                }
            }else if(S[i]=='G' && S[j]=='B'){
                if(j+(j-i)<N && S[j+(j-i)]=='R'){
                    ans += R-sumr[j]-1;
                }else{
                    ans += R-sumr[j];
                }
            }
        }
    }

    cout << ans << endl;
}