#include <bits/stdc++.h>

using namespace std;

int main(){
    int L,R,M=2018;

    cin >> L >> R;

    int l=L%2019;
    int r=R%2019;

    if((r)<=(l)||2019<(R-L)){
        cout << "0" << endl;
    }else{
        for(int i=l;i<r;i++){
            for(int j=i+1;j<=r;j++){
            M = min(M,(i*j)%2019);
            }
            }
        cout << M << endl;
    }
}