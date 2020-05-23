#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,a;
    cin >> N;
    a = N;
    for(int i=1;i<=N;i++){
        if(a==floor(i*1.08)){
            cout << i << endl;
            return 0;
        }
    }

    cout << ":(" << endl;
}