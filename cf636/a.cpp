#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int n,now=3;
        cin >> n;
        for(int j=2;;j++){
            if(n%now==0){
                cout << n/now << endl;
                break;
            }
            now += pow(2,j);
        }
    }
}