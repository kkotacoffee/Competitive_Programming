#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum[4] = {0};
    vector<string> amari(4,"");

    string S;
    cin >> S;
    
    for(int i=0;i<S.size()-1;i+=2){

        for(int j=0;j<4;j++){
            if(S[i+1]!='1'){
                amari[j] += S[i];
                amari[j] += S[i+1];
            }else{
                amari[j] += S[i];
                amari[j] += S[i+1];
                amari[j] += S[i+2];
            }
        }

        if(S[i]=='S'){
            if(S[i+1]=='1' || S[i+1]=='J' || S[i+1]=='Q' || S[i+1]=='K' || S[i+1]=='A'){
                sum[0]++;
                if(S[i+1]!='1'){
                    amari[0].erase(amari[0].end()-2,amari[0].end());
                }else{
                    amari[0].erase(amari[0].end()-3,amari[0].end());
                }
            }
        }else if(S[i]=='H'){
            if(S[i+1]=='1' || S[i+1]=='J' || S[i+1]=='Q' || S[i+1]=='K' || S[i+1]=='A'){
                sum[1]++;
                if(S[i+1]!='1'){
                    amari[1].erase(amari[1].end()-2,amari[1].end());
                }else{
                    amari[1].erase(amari[1].end()-3,amari[1].end());
                }
            }
        }else if(S[i]=='D'){
            if(S[i+1]=='1' || S[i+1]=='J' || S[i+1]=='Q' || S[i+1]=='K' || S[i+1]=='A'){
                sum[2]++;
                if(S[i+1]!='1'){
                    amari[2].erase(amari[2].end()-2,amari[2].end());
                }else{
                    amari[2].erase(amari[2].end()-3,amari[2].end());
                }
            }
        }else{
            if(S[i+1]=='1' || S[i+1]=='J' || S[i+1]=='Q' || S[i+1]=='K' || S[i+1]=='A'){
                sum[3]++;
                if(S[i+1]!='1'){
                    amari[3].erase(amari[3].end()-2,amari[3].end());
                }else{
                    amari[3].erase(amari[3].end()-3,amari[3].end());
                }
            }
        }

        if(S[i+1]=='1'){
            i++;
        }

        for(int j=0;j<4;j++){
            if(sum[j]==5){
                if(amari[j]==""){
                    cout << 0 << endl;
                }else{
                    cout << amari[j] << endl;
                }
                return 0;
            }
        }
    }
}