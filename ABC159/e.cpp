#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int H,W,K,ans=1000000000;
    cin >> H >> W >> K;
    vector<string> S(H);
    int ws[H][W],xx[H][W];

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            xx[i][j] = 0;
        }
    }

    for(int i=0;i<H;i++){
        cin >> S[i];
        for(int j=0;j<W;j++){
            if(S[i][j]=='1'){
                if(j==0){
                    ws[i][j] = 1;
                }else{
                    ws[i][j] = ws[i][j-1]+1;
                }
            }else{
                if(j==0){
                    ws[i][j] = 0;
                }else{
                    ws[i][j] = ws[i][j-1];
                }
            }
        }
    }


    for(int i=0;i<pow(2,H);i++){

        long long int anss=0;
        vector<int> sb(H,0);

        for(int j=0;j<H;j++){
            for(int k=0;k<W;k++){
                xx[j][k] = 0;
            }
        }

        for(int j=0;j<H;j++){

            if((i>>j)&1==1 && j!=H-1){
                anss++;
                for(int k=0;k<W;k++){
                    xx[j+1][k] += ws[j][k]+xx[j][k];
                    xx[j][k] = 0;
                }

            }else{
                for(int k=0;k<W;k++){
                    xx[j][k] += ws[j][k];
                }
            }
        }


            for(int j=0;j<W;j++){
                bool diving = false;
                for(int k=0;k<H;k++){
                    if(K<xx[k][j]-sb[k]){
                        diving = true;
                    }
                }

                if(diving){
                    for(int k=0;k<H;k++){
                        sb[k] += xx[k][j-1];
                    }
                    anss++;
                }
            }
        
        //cout << anss << endl;
        ans = min(ans,anss);
    }

    cout << ans << endl;
}