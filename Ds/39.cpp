#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> S(H),ans(H,""),done(H,"");
    for(int i=0;i<H;i++){
        cin >> S[i];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            bool ok = true;
            if(S[i][j]=='.'){
                ok = false;
            }

            if(i!=0 && S[i-1][j]=='.'){
                ok = false;
            }

            if(i!=0 && j!=0 && S[i-1][j-1]=='.'){
                ok = false;
            }

            if(i!=0 && j!=W-1 && S[i-1][j+1]=='.'){
                ok = false;
            }

            if(j!=0 && S[i][j-1]=='.'){
                ok = false;
            }

            if(j!=W-1 && S[i][j+1]=='.'){
                ok = false;
            }

            if(i!=H-1 && j!=0 && S[i+1][j-1]=='.'){
                ok = false;
            }

            if(i!=H-1 && S[i+1][j]=='.'){
                ok = false;
            }

            if(i!=H-1 && j!=W-1 && S[i+1][j+1]=='.'){
                ok = false;
            }

            if(ok){
                ans[i] += '#';
            }else{
                ans[i] += '.';
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            bool ok = true;
            if(ans[i][j]=='#'){
                ok = false;
            }

            if(i!=0 && ans[i-1][j]=='#'){
                ok = false;
            }

            if(i!=0 && j!=0 && ans[i-1][j-1]=='#'){
                ok = false;
            }

            if(i!=0 && j!=W-1 && ans[i-1][j+1]=='#'){
                ok = false;
            }

            if(j!=0 && ans[i][j-1]=='#'){
                ok = false;
            }

            if(j!=W-1 && ans[i][j+1]=='#'){
                ok = false;
            }

            if(i!=H-1 && j!=0 && ans[i+1][j-1]=='#'){
                ok = false;
            }

            if(i!=H-1 && ans[i+1][j]=='#'){
                ok = false;
            }

            if(i!=H-1 && j!=W-1 && ans[i+1][j+1]=='#'){
                ok = false;
            }

            if(!ok){
                done[i] += '#';
            }else{
                done[i] += '.';
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j]!=done[i][j]){
                cout << "impossible" << endl;
                return 0;
            }
        }
    }

    cout << "possible" << endl;

    for(int i=0;i<H;i++){
        cout << ans[i] << endl;
    }
}