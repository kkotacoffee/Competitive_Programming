#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int n,sum=0,odd=0;
        cin >> n;
        if((n/2)%2==1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(int i=0;i<n/2;i++){
                cout << 2*(i+1) << " ";
                sum += 2*(i+1);
            }

            for(int i=0;i<n/2 -1;i++){
                cout << 2*i+1 << " ";
                odd += 2*i+1;
            }

            cout << sum-odd << endl;
        }
    }
}