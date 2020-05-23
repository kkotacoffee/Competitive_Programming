#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(0<t){

        int a,b,q;

        cin >> a >> b >> q;

        vector<long long int> ans(q);

        for(int i=0;i<q;i++){
            long long int l,r;
            cin >> l >> r;
            if(r<max(a,b)){
                ans[i] = 0;
            }else{
                if(max(a,b)<=l){
                    ans[i] = r-l-max(a,b)*((r/(a*b))-(l/(a*b))) + 1;
                }else{
                    ans[i] = r-max(a,b) + 1;
                }
            }
        }

        cout << ans[0];

        for(int i=1;i<q;i++){
            cout << " " << ans[i];
        }

        cout << endl;
        t--;
    }
}