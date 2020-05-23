#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,ans=0;
    cin >> H >> W;
    vector<string> s(H);
    int sum[H][W];
    bool ue[H][W];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            sum[i][j] = -1;
            ue[i][j] = true;
        }
    }

    for(int i=0;i<H;i++){
        cin >> s[i];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){

            if(i==0 && j==0){

                if(s[0][0]=='#'){

                    sum[0][0] = 1;
                    int nowi=i+1,nowj=j+1;

                        while(1){
                            if(!(nowj<W && s[i][nowj]=='#')){
                                break;
                            }
                            sum[i][nowj] = sum[i][j];
                            nowj++;
                        }

                        while(1){
                            if(!(nowi<H && s[nowi][j]=='#')){
                                break;
                            }
                            sum[nowi][j] = sum[i][j];
                            nowi++;
                        }
                }else{
                    sum[i][j] = 0;
                }
            }else{

                if(s[i][j]=='#'){

                        if(sum[i][j]==-1){
                            sum[i][j] = min(sum[i-1][j],sum[i][j-1])+1;
                        }
                        int nowi=i+1,nowj=j+1;

                        while(1){
                            if(!(nowj<W && s[i][nowj]=='#')){
                                break;
                            }
                            
                            sum[i][nowj] = min(sum[i][nowj],sum[i][j]+1);
                           
                            nowj++;
                        }

                        while(1){
                            if(!(nowi<H && s[nowi][j]=='#')){
                                break;
                            }
                            
                                sum[nowi][j] = min(sum[nowi][j],sum[i][j]+1);
                            
                            nowi++;
                        }
                }else{
                        if(i==0){
                            sum[i][j] = sum[i][j-1];
                        }else if(j==0){
                            sum[i][j] = sum[i-1][j];
                        }else{
                            sum[i][j] = min(sum[i-1][j],sum[i][j-1]);
                        }
                }
                cout << sum[2][2];
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << sum[i][j];
        }
        cout << endl;
    }

    cout << sum[H-1][W-1] << endl;
}