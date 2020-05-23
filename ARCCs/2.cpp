#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> vec(16);
    vec[0] = "AA";
    vec[1] = "AB";
    vec[2] = "AX";
    vec[3] = "AY";
    vec[4] = "BA";
    vec[5] = "BB";
    vec[6] = "BX";
    vec[7] = "BY";
    vec[8] = "XA";
    vec[9] = "XB";
    vec[10] = "XX";
    vec[11] = "XY";
    vec[12] = "YA";
    vec[13] = "YB";
    vec[14] = "YX";
    vec[15] = "YY";
    int N,ans=1e9;
    cin >> N;
    string S;
    cin >> S;

    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            if(i==j){
                continue;
            }
            int tmp=0;

            for(int k=0;k<S.size();k++){
                string now = "";

                if(k==S.size()-1){
                    tmp++;
                    break;
                }
                
                now += S[k];
                now += S[k+1];

                if(now==vec[i]){
                    k++;
                }else if(now==vec[j]){
                    k++;
                }

                tmp++;
            }

            ans = min(ans,tmp);
        }
    }

    cout << ans << endl;
}