#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int N,ans=0;
    cin >> N;
    string S;
    cin >> S;

    for(int i=0;i<1000;i++){
        vector<int> count(10,0),num(3);
        vector<bool> B(3);
        int now=0;
        num[0] = i/100;
        num[1] = (i%100)/10;
        num[2] = i%10;
        for(int j=0;j<S.size();j++){
            if(num[now]==S[j]-'0'){
                now++;
            }

            if(now==3){
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
}