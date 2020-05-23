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
            sum[i][j] = 0;
            ue[i][j] = true;
        }
    }

    for(int i=0;i<H;i++){
        cin >> s[i];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(i==0 && j == 0){
                if(s[i][j]=='#'){
                    sum[0][0] = 1;
                }
            }else if(i==0){
                ue[i][j] = false;
                if(s[i][j]=='#'){
                    if(s[i][j-1] == '#'){
                        sum[i][j] = sum[i][j-1];
                    }else{
                        sum[i][j] = sum[i][j-1]+1;
                    }
                }else{
                    sum[i][j] = sum[i][j-1];
                }

            }else if(j==0){
                if(s[i][j]=='#'){
                    if(s[i-1][j] == '#'){
                        sum[i][j] = sum[i-1][j];
                    }else{
                        sum[i][j] = sum[i-1][j]+1;
                    }
                }else{
                    sum[i][j] = sum[i-1][j];
                }
            }else{
                if(s[i][j]=='#'){
                    int ue,migi;
                    if(s[i][j-1] == '#'){
                        migi = sum[i][j-1];
                    }else{
                        migi = sum[i][j-1]+1;
                    }

                    if(s[i-1][j] == '#'){
                        ue = sum[i-1][j];
                    }else{
                        ue = sum[i-1][j]+1;
                    }

                    sum[i][j] = min(ue,migi);
                }else{
                    sum[i][j] = min(sum[i-1][j],sum[i][j-1]);
                }
            }
        }
    }

    cout << sum[H-1][W-1] << endl;
}















else{
                    int nowi=i+1,nowj=j+1;

                        while(1){
                            if(!(nowj<W && s[i][nowj]=='#')){
                                s[i][nowj-1] = '#';
                                break;
                            }
                            if(sum[i][nowj]==-1){
                                sum[i][nowj] = sum[i][j];
                            }else{
                                sum[i][nowj] = min(sum[i][nowj],sum[i][j]);
                            }
                            nowj++;
                        }

                        while(1){
                            if(!(nowi<H && s[nowi][j]=='#')){
                                s[nowi-1][j] = '#';
                                break;
                            }
                            if(sum[nowi][j]==-1){
                                sum[nowi][j] = sum[i][j];
                            }else{
                                sum[nowi][j] = min(sum[nowi][j],sum[i][j]);
                            }
                            nowi++;
                        }
                }