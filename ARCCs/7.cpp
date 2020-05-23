#include <bits/stdc++.h>

using namespace std;

int main(){
    string c;
    int ans = 13;
    cin >> c;

    for(int i=0;i<pow(2,c.size());i++){
        vector<int> use(c.size(),0);
        int num = 0;
        string tmp = c;

        for(int j=0;j<c.size();j++){
            if(i>>j & 1 == 1){
                use[j] = 1;
                num++;
            }
        }

        for(int j=-c.size();j<c.size();j++){
            if(use[j]==1){
                for(int k=0;j+k<c.size();k++){
                    if(c[k]=='o'){
                        tmp[j+k] = 'o';
                    }
                }
            }
        }

        for(int j=0;j<c.size();j++){
            if(tmp[j]=='x'){
                break;
            }

            if(j==c.size()-1){
                ans = min(ans,num);
            }
        }
    }

    cout << ans << endl;
}