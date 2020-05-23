#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,ans=0;
    cin >> H >> W;
    vector<string> S(H);
    int v[H][W]={0},p[H][W]={0};
    for(int i=0;i<H;i++){
        cin >> S[i];
    }

    for(int i=0;i<H;i++){
        int lst = 0;
        for(int j=0;j<W;j++){
            if(S[i][j]=='#'){
                p[i][j]=0;
                for(int k=lst;k<j;k++){
                    p[i][k] = j-lst;
                }
                lst = j+1;
            }else if(j==W-1){  
                for(int k=lst;k<=j;k++){
                    p[i][k] = j-lst+1;
                }
            }
        }
    }

    for(int i=0;i<W;i++){
        int lst = 0;
        for(int j=0;j<H;j++){
            if(S[j][i]=='#'){
                v[j][i]=0;
                for(int k=lst;k<j;k++){
                    v[k][i] = j-lst;
                }
                lst = j+1;
            }else if(j==H-1){
                for(int k=lst;k<=j;k++){
                    v[k][i] = j-lst+1;
                }
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            ans = max(p[i][j]+v[i][j],ans);
        }
    }

    cout << ans-1 << endl;
}