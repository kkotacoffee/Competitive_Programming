#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        if(n*(a-b)<=(c+d) && (c-d)<=n*(b+a)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}