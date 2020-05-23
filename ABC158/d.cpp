#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string S;
    cin >> S;
    long long int Q,count=0;
    cin >> Q;
    for(int i=0;i<Q;i++){
        int t;
        cin >> t;
        if(t==1){
            count++;
        }else{
            int f;
            string c;
            cin >> f >> c;
            if(count%2==1){
                if(f==1){
                    S += c;
                }else{
                    S.insert(0,c);
                }
            }else{
                if(f==1){
                    S.insert(0,c);
                }else{
                    S += c;
                }
            }
        }
    }

    if(count%2==0){
        cout << S << endl;
    }else{
        reverse(S.begin(),S.end());
        cout << S << endl;
    }
}
