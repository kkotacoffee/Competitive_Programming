#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(0<t){

        int n;
        cin >> n;
        bool ok = true;
        vector<int> p(n),done;

        for(int i=0;i<n;i++){
            cin >> p[i];
            p[i]--;
        }

        for(int i=0;i<n-1;i++){
            if(p[i]+1!=p[i+1]){
                done.push_back(p[i]);
            }
        }

        done.push_back(p[n-1]);

        for(int i=1;i<done.size();i++){
            if(done[i-1]<done[i]){
                ok = false;
                break;
            }
        }

        if(ok){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        t--;
    }
}
