#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long int x,n,m;
        cin >> x >> n >> m;

        for(int i=0;i<n;i++){
            if(x<=20){
                break;
            }
            x /= 2;
            x += 10;
        }

        for(int i=0;i<m;i++){
            x-= 10;
        }

        if(x<=0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}